/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:34:48 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/03 13:51:11 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swaptab(int *tab, int current, int wall)
{
	int	tmp;

	tmp = tab[current];
	tab[current] = tab[wall];
	tab[wall] = tmp;
}

void	ft_quicksort(int *tab, int len)
{
	int	wall;
	int	current;
	int	pivot;

	if (len < 2)
		return ;
	pivot = tab[len - 1];
	wall = 0;
	current = 0;
	while (current < len)
	{
		if (tab[current] <= pivot)
		{
			if (wall != current)
				ft_swaptab(tab, current, wall);
			wall++;
		}
		current++;
	}
	ft_quicksort(tab, wall - 1);
	ft_quicksort(tab + wall - 1, len - wall + 1);
}
