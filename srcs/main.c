/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:43:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/02 21:32:20 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlst(t_list *lst)
{
	if (lst)
	{
		while (lst)
		{
			printf ("%d ", lst->content);
			lst = lst->next;
		}
		printf("\n");
	}
}

int	main(int ac, char **av)
{
	int		*tab;
	int		i;
	char	**strs;
	t_list	*a;
	t_list	*b;

	b = NULL;
	strs = ft_split(av[1], ' ');
	i = 0;
	while (strs[i])
		i++;
	if (i > 1)
	{
		tab = ft_filltab(i, strs);
		a = ft_filllst(i, tab);
		push_swap(&a, &b, tab, i);
	}
	else
	{
		tab = ft_filltab(ac - 1, &av[1]);
		a = ft_filllst(ac - 1, tab);
		push_swap(&a, &b, tab, ac - 1);
	}
	free(tab);
	return (0);
}
