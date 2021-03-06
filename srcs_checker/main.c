/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:38:43 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/13 17:38:14 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	ft_exec(int *tab, int len)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = ft_filllst(len, tab);
	ft_quicksort(tab, len);
	checker(&a, &b, tab, len);
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
	int	len;
	int	*tab;

	if (ac <= 1)
		return (0);
	len = ft_arg(ac, av, &tab);
	ft_exec(tab, len);
	return (0);
}
