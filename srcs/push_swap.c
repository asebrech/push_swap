/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:58:59 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/10 11:36:46 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_relarge(t_list **a, t_list **b, int *tab, int len)
{
	if (len % 3 == 0)
		push_swap(a, b, &tab[len / 3 * 2], len / 3);
	else if (len % 3 == 1)
		push_swap(a, b, &tab[len / 3 * 2], len / 3 + 1);
	else if (len % 3 == 2)
		push_swap(a, b, &tab[len / 3 * 2 + 1], len / 3 + 1);
}

static void	ft_remedium(t_list **a, t_list **b, int *tab, int len)
{
	if (len % 3 == 2)
		push_swap(a, b, &tab[len / 3], len / 3 + 1);
	else
		push_swap(a, b, &tab[len / 3], len / 3);
}

static	void	distrib_loop(t_list **a, t_list **b, int *tab, int len)
{
	int	i;
	int	med;

	i = 0;
	med = 0;
	while (i < len)
	{
		med += ft_distribute(a, b, tab, len);
		i++;
	}
	i = 0;
	while (i < med)
	{
		ft_push(b, a, 'b');
		i++;
	}
}

void	push_swap(t_list **a, t_list **b, int *tab, int len)
{
	int	i;

	i = 0;
	//printf("len = %d\n", len);
	//printf("cat = %d\n", cat);
	ft_reset(a, b);
	if (len > 2)
	{
		distrib_loop(a, b, tab, len);
	}
	else
	{
		while (i < len)
		{
			ft_recovery(a, b, tab, len);
			i++;
		}
		return ;
	}
	ft_relarge(a, b, tab, len);
	ft_remedium(a, b, tab, len);
	push_swap(a, b, tab, len / 3);
}
