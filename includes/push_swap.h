/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:45:15 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/07 15:58:10 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "move.h"

# include <stdio.h>

void	push_swap(t_list **a, t_list **b, int *tab, int len);
void	ft_quicksort(int *tab, int len);
void	ft_reset(t_list *a, t_list *b);
int		*ft_filltab(int ac, char **av);
int		median1(int *tab, int len);
int		median2(int *tab, int len);
int		intab(t_list *lst, int	*tab, int len);
int		ft_distribute(t_list **a, t_list **b, int *tab, int len);
t_list	*ft_filllst(int ac, int *tab);

#endif
