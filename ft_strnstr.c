/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:39:34 by grannou           #+#    #+#             */
/*   Updated: 2021/03/11 15:39:10 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates the FIRST occurence of the null terminated string
** needle in the first len characters of the null terminated string haystack
** characters that appears after '\0' are not searched
** Return options:
** • If neeedle is an empty string, haystack is returned
** • If needle occurs nowhere im haystack, NULL is returned
** • If needle occurs fully in haystack, pointer to first occurence of needle
** is returned
** Here a nested while loop is needed, to check first through haystack, then
** through needle each time its first character is found to check if the next
** characters of needle match too. So index i is initialized 0 at each loop
** Pseudo code:
** Until haystack contains characters and len is positive:
** • if needle[0] == haystack[0] and 0 < len then compare next characters
** • if all needle[i] match haystack[i], return pointer of haystack character
** that matched first character of needle (while incrementing i, it increments
** content and not pointer)
** • if not all needle[i] match haystack[i], increment the haystack pointer
** (initially on the first character)
** • if end of haystack is reached and needle not found, return NULL
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		i = 0;
		while (needle[i] && (haystack[i] == needle[i]) && i <= len)
			i++;
		if (!needle[i])
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
