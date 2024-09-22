/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:09:09 by grannou           #+#    #+#             */
/*   Updated: 2021/08/22 09:37:45 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function counts the number of element a given list has
** Here is the prototype of the structure in libft.h:
** typedef struct    s_list
** {
**     void            *content;
**     struct s_list   *next;
** }                 t_list;
** *content is a void pointer, *next is a struct pointer to the next element
** of the list.
*/

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
