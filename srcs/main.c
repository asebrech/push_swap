/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:43:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 14:29:55 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	int		*tab;
	t_list	*lst;

	i = 0;
	tab = ft_filltab(ac, av);
	lst = ft_filllst(ac, tab);
	push_swap(lst);
	return (0);
}
