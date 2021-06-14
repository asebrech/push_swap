/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:45:15 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/14 10:35:07 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "move.h"

void	push_swap(t_list **a, t_list **b, int *tab, int len);
void	ft_quicksort(int *tab, int len);
void	ft_threesort(t_list **a, int len);
void	ft_reset(t_list **a, t_list **b);
void	ft_recovery(t_list **a, t_list **b, int *tab, int len);
void	ft_distribute(t_list **a, t_list **b, int *tab, int len);
void	ft_distrib_first(t_list **a, t_list **b, int *tab, int len);
int		*ft_filltab(int ac, char **av);
int		median(int *tab, int len);
int		intab(t_list *lst, int	*tab, int len);
t_list	*ft_filllst(int ac, int *tab);
t_list	*second_last(t_list *lst);
t_list	*second_second_last(t_list *lst);

#endif
