/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:31:54 by grannou           #+#    #+#             */
/*   Updated: 2021/03/12 09:18:37 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** This function contiguously allocates enough space for count objects that are
** size bytes of memory and returns a pointer to the allocated memory
** The allocated memory is filled with bytes of value 0 (int), '\0' (char)
** Comparing with malloc() function which allocates size bytes of memory, like
** a big box of size bytes, calloc() allocates a big box of count rooms, each
** room with size bytes of memory and initializes each byte to 0.
** Here ft_memset() is used instead of ft_bzero() because it's safer.
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*new_str;

	new_str = malloc(count * size);
	if (!new_str)
		return (NULL);
	ft_memset(new_str, 0, count * size);
	return (new_str);
}
