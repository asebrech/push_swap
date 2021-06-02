/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:45:15 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/02 21:18:43 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "move.h"

# include <stdio.h>

void	push_swap(t_list **a, t_list **b, int *tab, int len);
void	ft_exit(void);
int		*ft_filltab(int ac, char **av);
t_list	*ft_filllst(int ac, int *tab);

#endif
