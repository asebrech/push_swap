/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distribute.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:56:17 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/12 13:39:09 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_small(t_list **a, t_list **b, int *tab, int len)
{
	if ((*a)->mob && intab(*a, tab, len))
	{
		ft_push(b, a, 'b');
	}
	else if ((*b)->mob && intab(*b, tab, len))
	{
		ft_push(a, b, 'a');
	}
}

static void	ft_large(t_list **a, t_list **b, int *tab, int len)
{
	if ((*a)->mob && intab(*a, tab, len) && len != 2)
	{
		ft_push(b, a, 'b');
		ft_rotate(b, 'b');
	}
	else if ((*b)->mob && intab(*b, tab, len))
	{
		ft_rotate(b, 'b');
	}
}

void	ft_distribute(t_list **a, t_list **b, int *tab, int len)
{
	int	i;	
	int	m;

	i = 0;
	while (i < len)
	{
		m = median(tab, len);
		if ((*a)->mob && (*a)->nb <= m && intab(*a, tab, len))
			ft_small(a, b, tab, len);
		else if (*b && (*b)->mob && (*b)->nb <= m && intab(*b, tab, len))
			ft_small(a, b, tab, len);
		else if ((*a)->mob && (*a)->nb > m && intab(*a, tab, len))
			ft_large(a, b, tab, len);
		else if (*b && (*b)->mob && (*b)->nb > m && intab(*b, tab, len))
			ft_large(a, b, tab, len);
		i++;
	}
}
