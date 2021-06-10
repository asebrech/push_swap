/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recovery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:52:12 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/10 11:40:40 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	twosort(t_list **a)
{
	if ((*a)->next && (*a)->nb > (*a)->next->nb)
		ft_swap(a, 'a');
}

void	ft_recovery(t_list **a, t_list **b, int *tab, int len)
{
	if (intab(ft_lstlast(*a), tab, len))
	{
		ft_rrotate(a, 'a');
		twosort(a);
	}
	else if (*b && intab(*b, tab, len))
	{
		ft_push(a, b, 'a');
		twosort(a);
	}
	else if (*b && intab(ft_lstlast(*b), tab, len))
	{
		ft_rrotate(b, 'b');
		ft_push(a, b, 'a');
		twosort(a);
	}
	
}
