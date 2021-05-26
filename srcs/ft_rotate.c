/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:02:40 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/26 11:38:58 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_double_rotate(t_list **a, t_list **b)
{
	ft_rotate(a, 'c');
	ft_rotate(b, 'c');
	ft_putstr_fd("rr\n", 1);
}

void	ft_rotate(t_list **lst, char c)
{
	t_list	*new;

	if (*lst && (*lst)->next)
	{
		new = ft_lstnew((*lst)->content);
		ft_lstadd_back(lst, new);
		*lst = (*lst)->next;
	}
	if (c == 'a')
		ft_putstr_fd("ra\n", 1);
	else if (c == 'b')
		ft_putstr_fd("rb\n", 1);
}
