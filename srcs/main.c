/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:43:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/08 11:10:40 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static void	ft_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static void	ft_exec(int *tab, int len)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = ft_filllst(len, tab);
	ft_quicksort(tab, len);
	if (len <= 3)
		ft_threesort(&a, &b, tab, len);
	else
		push_swap(&a, &b, tab, len);
	printlst(a);
	if (b)
		printlst(b);
	ft_lstclear(&a);
	ft_lstclear(&b);
	free(tab);
}

int	main(int ac, char **av)
{
	int		len;
	int		*tab;
	char	**strs;

	strs = ft_split(av[1], ' ');
	len = 0;
	while (strs[len])
		len++;
	if (len > 1)
	{
		if (av[2])
			ft_exit();
		tab = ft_filltab(len, strs);
	}
	else
	{
		tab = ft_filltab(ac - 1, &av[1]);
		len = ac - 1;
	}
	ft_exec(tab, len);
	return (0);
}
