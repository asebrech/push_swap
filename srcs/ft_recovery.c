/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recovery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:52:12 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/14 11:10:31 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	case_1(t_list **a, t_list **b, int *tab, int len)
{
	if (intab(*a, tab, len))
		ft_rotate(a, 'a');
	else if ((*a)->next && intab((*a)->next, tab, len))
	{
		ft_swap(a, 'a');
		ft_rotate(a, 'a');
	}
	else if ((*a)->next
		&& (*a)->next->next && intab((*a)->next->next, tab, len))
	{
		ft_push(b, a, 'b');
		ft_swap(a, 'a');
		ft_rotate(a, 'a');
	}
}

static void	case_2(t_list **a, t_list **b, int *tab, int len)
{
	if (*b && intab(*b, tab, len))
	{
		ft_push(a, b, 'a');
		ft_rotate(a, 'a');
	}
	else if (*b && (*b)->next && intab((*b)->next, tab, len))
	{
		ft_push(a, b, 'a');
		ft_push(a, b, 'a');
		ft_rotate(a, 'a');
	}
	else if (*b && (*b)->next
		&& (*b)->next->next && intab((*b)->next->next, tab, len))
	{
		ft_push(a, b, 'a');
		ft_push(a, b, 'a');
		ft_push(a, b, 'a');
		ft_rotate(a, 'a');
	}
}

static void	case_3(t_list **a, t_list **b, int *tab, int len)
{
	if (*b && intab(ft_lstlast(*b), tab, len))
	{
		ft_rrotate(b, 'b');
		ft_push(a, b, 'a');
		ft_rotate(a, 'a');
	}
	else if (*b && (*b)->next && intab(second_last(*b), tab, len))
	{
		ft_rrotate(b, 'b');
		ft_rrotate(b, 'b');
		ft_push(a, b, 'a');
		ft_rotate(a, 'a');
	}
	else if (*b && (*b)->next
		&& (*b)->next->next
		&& intab(second_second_last(*b), tab, len))
	{
		ft_rrotate(b, 'b');
		ft_rrotate(b, 'b');
		ft_rrotate(b, 'b');
		ft_push(a, b, 'a');
		ft_rotate(a, 'a');
	}
}

void	ft_recovery(t_list **a, t_list **b, int *tab, int len)
{	
	case_1(a, b, tab, len);
	case_2(a, b, tab, len);
	case_3(a, b, tab, len);
}
