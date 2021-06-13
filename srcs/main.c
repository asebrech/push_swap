/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:43:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/13 10:41:43 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//fonction printlst a supprimer !!!
void	printlst(t_list *lst)
{
	if (lst)
	{
		while (lst)
		{
			printf ("%d ", lst->nb);
			lst = lst->next;
		}
		printf("\n");
	}
}

static int	is_sort(int *tab, int len)
{
	int	i;
	int	*tmp;

	tmp = malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		tmp[i] = tab[i];
		i++;
	}
	ft_quicksort(tab, len);
	i = 0;
	while (i < len)
	{
		if (tmp[i] != tab[i])
		{
			free(tmp);
			return (0);
		}
		i++;
	}
	free(tmp);
	return (1);
}

static void	ft_exec(int *tab, int len)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = ft_filllst(len, tab);
	if (is_sort(tab, len))
		return ;
	if (len <= 3)
		ft_threesort(&a, len);
	else
		push_swap(&a, &b, tab, len);
	printlst(a);
	if (b)
		printlst(b);
	ft_lstclear(&a);
	ft_lstclear(&b);
	free(tab);
}

static void	free_strs(char **strs)
{
	unsigned int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
}

static int	ft_arg(int ac, char **av, int **tab)
{
	int		len;
	char	**strs;

	strs = ft_split(av[1], ' ');
	len = 0;
	while (strs[len])
		len++;
	if (len > 1)
	{
		if (av[2])
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		*tab = ft_filltab(len, strs);
	}
	else
	{
		*tab = ft_filltab(ac - 1, &av[1]);
		len = ac - 1;
	}
	free_strs(strs);
	free(strs);
	return (len);
}

int	main(int ac, char **av)
{
	int		len;
	int		*tab;

	if (ac <= 1)
		return (0);
	len = ft_arg(ac, av, &tab);
	ft_exec(tab, len);
	return (0);
}
