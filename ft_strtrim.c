/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 10:52:55 by grannou           #+#    #+#             */
/*   Updated: 2021/08/31 10:18:40 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** This function allocates enough memory for a new string, which is the copy
** of string s1, truncated of set string at its beginning and its end
** It returns a pointer to new string, NULL if malloc() failed
** Here, ft_substr() returns a new string from s1, which starts at after set
** index and has s1 length minus set
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len_s1;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len_s1 = ft_strlen(s1);
	while (len_s1 && ft_strchr(set, s1[len_s1]))
		len_s1--;
	return (ft_substr((char *)s1, 0, len_s1 + 1));
}
