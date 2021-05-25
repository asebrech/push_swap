/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:38:27 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 16:56:37 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_oneclear(t_list **lst)
{
	t_list *tmp;

	tmp = *lst;
	*lst = (*lst)->next;
	free(tmp);
}

void	ft_push(t_list **a, t_list **b, char c)
{
	t_list	*new;

	if ((*b)->content)
	{
		new = ft_lstnew((*b)->content);
		ft_lstadd_front(a, new);
		ft_oneclear(b);
		if (c == 'a')
			ft_putstr_fd("pa\n", 1);
	}
}
