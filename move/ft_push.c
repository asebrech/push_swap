/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:38:27 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/07 15:00:08 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **a, t_list **b, char c)
{
	t_list	*new;

	if (*b)
	{
		new = ft_lstnew((*b)->nb);
		new->mob = 0;
		ft_lstadd_front(a, new);
		new = *b;
		*b = (*b)->next;
		free(new);
		if (c == 'a')
			ft_putstr_fd("pa\n", 1);
		else if (c == 'b')
			ft_putstr_fd("pb\n", 1);
	}
}
