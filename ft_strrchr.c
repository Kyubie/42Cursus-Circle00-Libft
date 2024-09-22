/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:49:37 by grannou           #+#    #+#             */
/*   Updated: 2021/03/11 08:34:32 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates the LAST occurence of char c value in the string s
** and returns a pointer to its location.
** The terminating null character ('\0') is considered part of s so if c is 0
** it returns NULL pointer, beacause first char in search is ending '\0'
** So while s contains sonething different than c, deincrement its pointer that
** starts at null terminating char of s ('\0'), meaning its length + 1
** As it reaches c, it returns the pointer on it. if c not found or s does not
** exists, then it returns NULL pointer
** Pointer is recast beacause it points to recast in char c.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len--)
		if (s[len] == (char)c)
			return ((char *)s + len);
	return (NULL);
}
