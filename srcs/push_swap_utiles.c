/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:49:00 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/11 14:27:56 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	median(int *tab, int len)
{
	if (len / 2 == 1)
		return (tab[len / 2 + 1]);
	else
		return (tab[len / 2]);
}

int	intab(t_list *lst, int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (lst->nb == tab[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_reset(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *a;
	tmp2 = *b;
	while (*a)
	{
		(*a)->mob = 1;
		*a = (*a)->next;
	}
	if (*b)
	{	
		while (*b)
		{
			(*b)->mob = 1;
			*b = (*b)->next;
		}
	}
	*a = tmp;
	*b = tmp2;
}
