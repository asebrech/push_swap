/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:58:59 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/26 15:17:05 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	printlst(t_list *lst)
{
	if (lst)
	{
		while (lst)
		{
			printf ("%d ", lst->content);
			lst = lst->next;
		}
		printf("\n");
	}
}

void	push_swap(t_list *a)
{
	t_list	*b;

	b = NULL;
	ft_push(&b, &a, 'b');
	ft_push(&b, &a, 'b');
	ft_push(&b, &a, 'b');
	ft_push(&b, &a, 'b');
	ft_double_rrotate(&a, &b);
	printlst(a);
	printlst(b);
}
