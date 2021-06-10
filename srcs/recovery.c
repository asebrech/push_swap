/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recovery.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:30:54 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/09 16:55:13 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	recover_large(t_list **a, int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (intab(ft_lstlast(*a), tab, len))
		{
			ft_rrotate(a, 'a');
			if ((*a)->next && (*a)->nb > (*a)->next->nb)
				ft_swap(a, 'a');
			i++;
		}
	}
}

void	recover_medium(t_list **a, t_list **b, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_push(a, b, 'a');
		if ((*a)->next && (*a)->nb > (*a)->next->nb)
			ft_swap(a, 'a');
		i++;
	}
}

void	recover_small(t_list **a, t_list **b, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_rrotate(b, 'b');
		ft_push(a, b, 'a');
		if ((*a)->next && (*a)->nb > (*a)->next->nb)
			ft_swap(a, 'a');
		i++;
	}
}
