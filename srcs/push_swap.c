/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:58:59 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/07 18:27:50 by asebrech         ###   ########.fr       */
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

static	int	distrib_loop(t_list **a, t_list **b, int *tab, int len)
{
	int	i;
	int	med;

	i = 0;	
	med = 0;
	ft_reset(*a, *b);
	while (i++ < len)
		med += ft_distribute(a , b , tab, len);
	while (med--)
		ft_push(b, a, 'b');
	return (med);
}

void	push_swap(t_list **a, t_list **b, int *tab, int len)
{
	int med;
	static int cat = 0;

	cat++;
	med = 0;
	if (len > 2)
		med = distrib_loop(a, b, tab, len);
	else if (len % 3 == 0)

	else if (len % 3 == 1)

	else

	ft_relarge(a, b, tab, len);
	ft_remedium(a, b, tab, len);
	push_swap(a, b, tab, len / 3);
}
