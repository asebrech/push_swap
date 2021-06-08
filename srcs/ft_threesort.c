/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_threesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:25:53 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/08 12:25:56 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_twosort(t_list **a)
{
	if ((*a)->next && (*a)->nb > (*a)->next->nb)
		ft_swap(a, 'a');
}

static void	case_1(t_list **a)
{
	ft_swap(a, 'a');
	ft_rrotate(a, 'a');
}

static void	case_2(t_list **a)
{	
	ft_swap(a, 'a');
	ft_rotate(a, 'a');
}

void	ft_threesort(t_list **a, int len)
{
	if (len <= 2)
		ft_twosort(a);
	else
	{
		if ((*a)->nb > (*a)->next->nb && (*a)->next->nb < (*a)->next->next->nb
			&& (*a)->nb < (*a)->next->next->nb)
			ft_swap(a, 'a');
		else if ((*a)->nb > (*a)->next->nb
			&& (*a)->next->nb > (*a)->next->next->nb
			&& (*a)->nb > (*a)->next->next->nb)
			case_1(a);
		else if ((*a)->nb > (*a)->next->nb
			&& (*a)->next->nb < (*a)->next->next->nb
			&& (*a)->nb > (*a)->next->next->nb)
			ft_rotate(a, 'a');
		else if ((*a)->nb < (*a)->next->nb
			&& (*a)->next->nb > (*a)->next->next->nb
			&& (*a)->nb < (*a)->next->next->nb)
			case_2(a);
		else if ((*a)->nb < (*a)->next->nb
			&& (*a)->next->nb > (*a)->next->next->nb
			&& (*a)->nb > (*a)->next->next->nb)
			ft_rrotate(a, 'a');
	}
}
