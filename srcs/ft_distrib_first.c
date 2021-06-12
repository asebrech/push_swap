/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distrib_first.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 13:42:54 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/12 13:07:50 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_distrib_first(t_list **a, t_list **b, int *tab, int len)
{	
	int	m;
	int	i;

	i = 0;
	while (i < len)
	{
		m = median(tab, len);
		//printf ("median = %d\n", m);
		if ((*a)->mob && (*a)->nb <= m && intab(*a, tab, len))
			ft_rotate(a, 'a');
		else if ((*a)->mob && (*a)->nb > m && intab(*a, tab, len))
			ft_push(b, a, 'b');
		i++;
	}
}
