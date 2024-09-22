/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:10:19 by grannou           #+#    #+#             */
/*   Updated: 2021/09/09 13:42:56 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function adds element new to the end of the list alst
** Here is the prototype of the structure in libft.h:
** typedef struct    s_list
** {
**     void            *content;
**     struct s_list   *next;
** }                 t_list;
** *content is a void pointer, *next is a struct pointer to the next element
** of the list.
** Here it uses ft_lstlast(t_list *lst) to access the last element of the list
** and put new as its next element. If there is no list, new becomes the head
** of the list
*/

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst)
		ft_lstlast(*alst)->next = new;
	else
		*alst = new;
}
