/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:07:12 by grannou           #+#    #+#             */
/*   Updated: 2021/08/31 10:18:42 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates the FIRST occurence of char c value in the string s
** and returns a pointer to its location.
** The terminating null character ('\0') is considered part of s so if c is 0
** it returns NULL pointer.
** So while s contains sonething different than c, increment its pointer. As it
** reaches c, it returns the pointer on it. if c not found or last char of s or
** s does not exists, then it returns NULL pointer
** Pointer is recast beacause it points to recast in char c.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
