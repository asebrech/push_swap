/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:27:24 by asebrech          #+#    #+#             */
/*   Updated: 2021/06/07 14:36:37 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, long (f)(long))
{
	t_list	*tab;
	t_list	*tmp;
	long	content;

	tab = NULL;
	while (lst)
	{
		content = f(lst->nb);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			ft_lstclear(&tab);
			return (NULL);
		}
		ft_lstadd_back(&tab, tmp);
		lst = lst->next;
	}
	return (tab);
}
