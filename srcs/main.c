/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:43:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 13:46:11 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	int		*tab;
	t_list	*lst;

	i = 0;
	tab = ft_filltab(ac, av);
	lst = ft_filllst(tab, ac);
	while (ac - 1)
	{
		printf("%d ", lst->content);
		lst = lst->next;
		ac--;
	}
	return (0);
}
