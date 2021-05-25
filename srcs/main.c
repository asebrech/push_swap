/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:43:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 15:24:03 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*tab;
	t_list	*lst;

	t_list	*lst2;
	int tab2[5] = {9, 8, 7, 6, 5};
	lst2 = ft_filllst(6, tab2);	

	tab = ft_filltab(ac, av);
	lst = ft_filllst(ac, tab);
	ft_double_swap(lst, lst2);
	push_swap(lst);
	push_swap(lst2);
	return (0);
}
