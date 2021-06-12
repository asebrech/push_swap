/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:58:59 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/12 13:23:52 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **a, t_list **b, int *tab, int len)
{
	int		i;
	static int	j = -1;

	j++;
	i = 0;
	ft_reset(a, b);
	if (len > 3)
	{
		if (*b && !intab(*b, tab, len))
		{
			while (intab(ft_lstlast(*b), tab, len) && i < len)
			{
				ft_rrotate(b, 'b');
				i++;
			}
		}
		i = 0;
		if (intab((*a), tab, len) && intab(ft_lstlast(*a), tab, len))
			ft_distrib_first(a, b, tab, len);
		else
			ft_distribute(a, b, tab, len);
	}
	else
	{
		while (i < len)
		{
			ft_recovery(a, b, tab, len);
			i++;
		}
		i = 0;
		if(!intab(ft_lstlast(*a), tab, len))
		{ 
			while (i < len)
			{	
				ft_rotate(a, 'a');
				i++;
			}
		}
		return ;
	}
	push_swap(a, b, tab, len / 2 + 1);
	if (len % 2 == 1)
		push_swap(a, b, &tab[len / 2 + 1], len / 2);
	else
		push_swap(a, b, &tab[len / 2 + 1], len / 2 - 1);
}
