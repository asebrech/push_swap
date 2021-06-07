/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distribute.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:56:17 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/07 17:24:36 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_small(t_list **a, t_list **b, int *tab, int len)
{
	if (intab(*a, tab, len))
	{
		ft_push(b, a, 'b');
		ft_rotate(b, 'b');
	}
	else if (intab(*b, tab, len))
	{
		ft_rotate(b, 'b');
	}
}

static int	ft_medium(t_list **a, t_list **b, int *tab, int len)
{
	int	med;

	med = 0;
	if (intab(*a, tab, len))
	{
		ft_push(b, a, 'b');
	}
	else if (intab(*b, tab, len))
	{
		ft_push(a, b, 'a');
		med++;
	}
	return (med);
}

static void	ft_large(t_list **a, t_list **b, int *tab, int len)
{
	if (intab(*a, tab, len))
	{
		ft_rotate(a, 'a');
	}
	else if (intab(*b, tab, len))
	{
		ft_push(a, b, 'a');
		ft_rotate(a, 'a');
	}
}

int	ft_distribute(t_list **a, t_list **b, int *tab, int len)
{	
	int	m1;
	int	m2;
	int	med;

	m1 = median1(tab, len);
	m2 = median2(tab, len);
	med = 0;
	if (((*a)->mob && (*a)->nb > m1 && (*a)->nb < m2)
		|| ((*a)->mob && m1 == m2 && (*a)->nb == m1))
		med = ft_medium(a, b, tab, len);
	else if ((*b && (*b)->mob && (*b)->nb > m1 && (*b)->nb < m2)
		|| (*b && (*b)->mob && m1 == m2 && (*b)->nb == m1))
		med = ft_medium(a, b, tab, len);
	else if ((*a)->mob && (*a)->nb <= m1)
		ft_small(a, b, tab, len);
	else if (*b && (*b)->mob && (*b)->nb <= m1)
		ft_small(a, b, tab, len);
	else if ((*a)->mob && (*a)->nb >= m2)
		ft_large(a, b, tab, len);
	else if (*b && (*b)->mob && (*b)->nb >= m2)
		ft_large(a, b, tab, len);
	return (med);
}
