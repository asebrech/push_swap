/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filltab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:50:39 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/26 13:47:20 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_exit_tab(int *tab)
{
	free(tab);
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

static void	ft_isalldigit(char *str, int *tab)
{
	int	i;

	i = 0;
	if (str[i] == '-' && !ft_isdigit(str[i + 1]))
		ft_exit_tab(tab);
	else if (str[i] == '-' && ft_isdigit(str[i + 1]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_exit_tab(tab);
		i++;
	}
}

static void	ft_nodouble(int ac, int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 1;
		while (tab[i + j])
		{
			if (tab[i] == tab[i + j])
				ft_exit_tab(tab);
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
	tab = malloc(sizeof(int) * ac);
	if (!tab)
		ft_exit_tab(tab);
	i = 0;
	while (i < ac)
	{
		ft_isalldigit(av[i], tab);
		nbr = ft_atoi(av[i]);
		if (nbr > 2147483647 || nbr < -2147483648)
			ft_exit_tab(tab);
		tab[i] = nbr;
		i++;
	}
	ft_nodouble(ac, tab);
	return (tab);
}
