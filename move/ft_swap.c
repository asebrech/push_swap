/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:43:29 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/26 13:32:39 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_double_swap(t_list **a, t_list **b)
{
	if (*a && (*a)->next && *b && (*b)->next)
	{
		ft_swap(a, 'c');
		ft_swap(b, 'c');
		ft_putstr_fd("ss\n", 1);
	}
	else if ((*a && (*a)->next) && (!*b || !(*b)->next))
		ft_swap(a, 'a');
	else if ((*b && (*b)->next) && (!*a || !(*a)->next))
		ft_swap(b, 'b');
}

void	ft_swap(t_list **lst, char c)
{
	t_list	*tmp;

	if (*lst && (*lst)->next)
	{
		tmp = ft_lstnew((*lst)->content);
		(*lst)->content = (*lst)->next->content;
		(*lst)->next->content = tmp->content;
		if (c == 'a')
			ft_putstr_fd("sa\n", 1);
		else if (c == 'b')
			ft_putstr_fd("sb\n", 1);
	}
}
