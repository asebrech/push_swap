/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:49:00 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 16:14:40 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

t_list	*ft_filllst(int ac, int *tab)
{
	int		i;
	t_list	*new;
	t_list	*alst;

	alst = NULL;
	i = 0;
	while (i < ac)
	{
		new = ft_lstnew(tab[i]);
		ft_lstadd_back(&alst, new);
		i++;
	}
	return (alst);
}
