/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:03:43 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/26 14:05:53 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVE_H
# define MOVE_H

# include "push_swap.h"

void	ft_swap(t_list **lst, char c);
void	ft_double_swap(t_list **a, t_list **b);
void	ft_push(t_list **a, t_list **b, char c);
void	ft_rotate(t_list **lst, char c);
void	ft_double_rotate(t_list **a, t_list **b);
void	ft_rrotate(t_list **lst, char c);
void	ft_double_rrotate(t_list **a, t_list **b);

#endif
