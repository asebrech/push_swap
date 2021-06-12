/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recovery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:52:12 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/12 13:47:47 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	twosort(t_list **a, int *tab, int len)
{
	if ((*a)->next && (*a)->nb > (*a)->next->nb && intab((*a), tab, len)
		&& intab((*a)->next, tab, len))
		ft_swap(a, 'a');
}

static void	checkthree(t_list **a, t_list **b, int *tab, int len)
{
	if ((*a)->next && (*a)->next->next && intab((*a)->next, tab, len)
		&& intab((*a)->next->next, tab, len)
		&& (*a)->next->nb > (*a)->next->next->nb)
	{
		ft_push(b, a, 'b');
		ft_swap(a, 'a');
		ft_push(a, b, 'a');
	}
}

static void	checksort(t_list **a, t_list *b, int *tab, int len)
{
	if ((*a)->next && (*a)->next->nb > b->nb
		&& intab((*a)->next, tab, len))
		ft_swap(a, 'a');
}

void	ft_recovery(t_list **a, t_list **b, int *tab, int len)
{	
	if (*b && intab(*b, tab, len))
	{
		checksort(a, *b, tab, len);
		ft_push(a, b, 'a');
	}
	else if (*b && intab(ft_lstlast(*b), tab, len))
	{
		checksort(a, ft_lstlast(*b), tab, len);
		ft_rrotate(b, 'b');
		ft_push(a, b, 'a');
	}
	if (ft_lstsize(*a) == len && len == 3)
		ft_threesort(a, len);
	else
	{
		twosort(a, tab, len);
		checkthree(a, b, tab, len);
		twosort(a, tab, len);
	}
}
