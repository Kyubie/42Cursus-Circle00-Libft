/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:11:22 by grannou           #+#    #+#             */
/*   Updated: 2021/08/22 09:18:36 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function delete and free the memory of the element lst and all the next
** ones with del() then free(). The initial pointer must become NULL
** Here is the prototype of the structure in libft.h:
** typedef struct    s_list
** {
**     void            *content;
**     struct s_list   *next;
** }                 t_list;
** *content is a void pointer, *next is a struct pointer to the next element
** of the list.
** Here the function uses ft_lstdelone() in a loop to delete each element after
** the one given to ft_lstclear(). First pointer to next element of element is
** put im a temporary variable tmp, then its content is deleted and its pointer
** is freed, then next element pointer is put in lst pointer
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
