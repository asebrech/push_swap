/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:43:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/26 13:48:09 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*tab;
	t_list	*a;

	t_list	*b;
	int tab2[5] = {9, 8, 7, 6, 5};
	b = ft_filllst(5, tab2);
	//b = NULL;

	tab = ft_filltab(ac - 1, &av[1]);
	a = ft_filllst(ac - 1, tab);
	free(tab);
	//ft_double_rotate(&a, &b);
	push_swap(a);
	push_swap(b);
	return (0);
}
