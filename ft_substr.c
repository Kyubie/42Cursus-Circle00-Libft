/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 08:18:45 by grannou           #+#    #+#             */
/*   Updated: 2021/08/31 10:11:24 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates enough memory for the copy of an extract of string s
** this new extracted string starts at start index of s, has len as maximum
** size and is null-terminated. len can't be negative because of size_t type
** It returns a pointer to extracted string, NULL if malloc() failed
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || !s)
		len = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	substr[len] = '\0';
	while (len--)
		substr[len] = s[start + len];
	return (substr);
}
