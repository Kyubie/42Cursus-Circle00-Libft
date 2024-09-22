/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:10:48 by grannou           #+#    #+#             */
/*   Updated: 2021/08/22 09:35:37 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** This function free the memory of the element lst using del() then free()
** the memory of next must not be freed
** Here is the prototype of the structure in libft.h:
** typedef struct    s_list
** {
**     void            *content;
**     struct s_list   *next;
** }                 t_list;
** *content is a void pointer, *next is a struct pointer to the next element
** of the list.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
