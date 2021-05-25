/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:45:15 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 15:06:49 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# include <stdio.h>

void	ft_exit(void);
void	push_swap(t_list *lst);
void	ft_swap(t_list *lst, char c);
void	ft_double_swap(t_list *a, t_list *b);
int		*ft_filltab(int ac, char **av);
t_list	*ft_filllst(int ac, int *tab);

#endif
