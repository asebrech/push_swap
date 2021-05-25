/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:27:24 by asebrech          #+#    #+#             */
/*   Updated: 2021/05/25 13:18:38 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (f)(int), int (del)(int))
{
	t_list	*tab;
	t_list	*tmp;
	int		content;

	tab = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			ft_lstclear(&tab, del);
			return (NULL);
		}
		ft_lstadd_back(&tab, tmp);
		lst = lst->next;
	}
	return (tab);
}
