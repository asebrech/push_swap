/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filltab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:50:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 14:14:03 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_isalldigit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' && str[i + 1] == '\0')
		ft_exit();
	else if (str[i] == '-' && ft_isdigit(str[i + 1]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_exit();
		i++;
	}
}

static void	ft_nodouble(int ac, int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{
		j = 1;
		while (tab[i + j])
		{
			if (tab[i] == tab[i + j])
				ft_exit();
			j++;
		}
		i++;
	}
}	

int	*ft_filltab(int ac, char **av)
{
	int		i;
	int		*tab;
	long	nbr;

	nbr = 0;
	tab = malloc(sizeof(int) * ac - 1);
	i = 0;
	while (i < ac - 1)
	{
		ft_isalldigit(av[i + 1]);
		nbr = ft_atoi(av[i + 1]);
		if (nbr > 2147483647 || nbr < -2147483648)
			ft_exit();
		tab[i] = nbr;
		i++;
	}
	ft_nodouble(ac, tab);
	return (tab);
}
