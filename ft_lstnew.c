/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:55:31 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 18:04:05 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates enought memory with malloc() to create a new element
** with the size of the structure defined in libft.h.
** Here is the prototype:
** typedef struct    s_list
** {
**     void            *content;
**     struct s_list   *next;
** }                 t_list;
** *content is a void pointer, *next is a struct pointer to the next element
** of the list.
** To create a new element, first malloc(), then put content pointer in content
** pointer of the structure and initialize *next to NULL.
** Syntax reminder:
** element->content = content; SAME AS *(element).content = content;
** element->next =  NULL; SAME AS *(element).next = NULL;
*/

t_list	*ft_lstnew(void *content)
{
	t_list		*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
