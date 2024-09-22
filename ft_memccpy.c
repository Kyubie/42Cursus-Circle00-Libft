/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:30:39 by grannou           #+#    #+#             */
/*   Updated: 2021/03/10 08:34:26 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies bytes from src memory location to dst memory location
** Two possibles cases:
** case 1: the n first bytes of src contains unsigned char value of c:
** copies bytes until the first occurence of c found, copies it and returns
** the pointer of copied c bytes + 1 (next byte of dst)
** case 2: the n first bytes of src does not contains unsigned char value of c:
** copies n bytes from src to dst then return a NULL pointer.
** Pseudo code:
** While n > 0, copy src to dst and increments dst, if next element of src is
** (unsigned char) c, return dst (that points to first byte memory location,
** copy incrementation was on content of that pointer), if next element of scr
** is not (unsigned char)c, continues copy and return NULL pointer.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return (dst);
	}
	return (NULL);
}
