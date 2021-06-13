/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:36:25 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/13 17:41:27 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	is_sort(t_list **a, int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if ((*a)->nb != tab[i])
		{
			ft_putstr_fd("KO\n", 1);
			return ;
		}
		i++;
		*a = (*a)->next;
	}
	ft_putstr_fd("OK\n", 1);
}

static void	ft_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static void	swap_push(t_list **a, t_list **b, char *line)
{
	if (ft_strncmp("pa", line, 4) == 0)
		ft_push(a, b, 'c');
	else if (ft_strncmp("pb", line, 4) == 0)
		ft_push(b, a, 'c');
	else if (ft_strncmp("ra", line, 4) == 0)
		ft_rotate(a, 'c');
	else if (ft_strncmp("rb", line, 4) == 0)
		ft_rotate(b, 'c');
	else if (ft_strncmp("rr", line, 4) == 0)
		ft_double_rotate(a, b, 'c');
	else if (ft_strncmp("rra", line, 4) == 0)
		ft_rrotate(a, 'c');
	else if (ft_strncmp("rrb", line, 4) == 0)
		ft_rrotate(b, 'c');
	else if (ft_strncmp("rrr", line, 4) == 0)
		ft_double_rrotate(a, b, 'c');
	else if (ft_strncmp("sa", line, 4) == 0)
		ft_swap(a, 'c');
	else if (ft_strncmp("sb", line, 4) == 0)
		ft_swap(b, 'c');
	else if (ft_strncmp("ss", line, 4) == 0)
		ft_double_swap(a, b, 'c');
	else
		ft_exit();
}

void	checker(t_list **a, t_list **b, int *tab, int len)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) != 0)
		swap_push(a, b, line);
	free(line);
	is_sort(a, tab, len);
}
