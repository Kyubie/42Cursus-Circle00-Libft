/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:12:30 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 18:03:40 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*begin;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	if (!new_list)
		return (NULL);
	begin = new_list;
	while (lst)
	{
		if (lst->next)
		{
			new_list->next = ft_lstnew((*f)(lst->next->content));
			if (!new_list->next)
			{
				ft_lstclear(&begin, del);
				return (NULL);
			}
			new_list = new_list->next;
		}
		lst = lst->next;
	}
	new_list->next = NULL;
	return (begin);
}
