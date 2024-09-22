/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:18:25 by grannou           #+#    #+#             */
/*   Updated: 2021/03/12 11:03:35 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** This function allocates sufficient memory for a copy of the string s1, does
** the copy and returns a pointer to it
** The recasting of malloc() is an additionnal type protection
** Here the copy starts at index of null-terminating '\0' of s1 and to do so,
** len is incremented in malloc() instead of using usual len + 1
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/

char	*ft_strdup(const char *s1)
{
	char		*copy;
	size_t		len;

	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (++len));
	if (!copy)
		return (NULL);
	while (len--)
		copy[len] = s1[len];
	return (copy);
}
