/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:41:18 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/02 19:52:38 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_double_rrotate(t_list **a, t_list **b)
{
	if (*a && (*a)->next && *b && (*b)->next)
	{
		ft_rrotate(a, 'c');
		ft_rrotate(b, 'c');
		ft_putstr_fd("rrr\n", 1);
	}
	else if ((*a && (*a)->next) && (!*b || !(*b)->next))
		ft_rrotate(a, 'a');
	else if ((*b && (*b)->next) && (!*a || !(*a)->next))
		ft_rrotate(b, 'b');
}

static t_list	*second_last(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next)
		lst = lst->next;
	return (lst);
}

void	ft_rrotate(t_list **lst, char c)
{
	t_list	*new;
	t_list	*tmp;
	t_list	*tofree;

	if (*lst && (*lst)->next)
	{
		tmp = ft_lstlast(*lst);
		new = ft_lstnew(tmp->content);
		tofree = ft_lstlast(*lst);
		tmp = second_last(*lst);
		tmp->next = NULL;
		free(tofree);
		ft_lstadd_front(lst, new);
		if (c == 'a')
			ft_putstr_fd("rra\n", 1);
		else if (c == 'b')
			ft_putstr_fd("rrb\n", 1);
	}
}
