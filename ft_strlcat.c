/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 09:14:43 by grannou           #+#    #+#             */
/*   Updated: 2021/03/11 10:09:41 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function appends string src to string dst in dstsize
** (buffersize of dst, \0 included, it should alway be longer than dst length)
** Most time the concatenation will append in the spare empty size which lenght
** is (dstsize - strlen(dst) - 1) at index strlen(dst) + 1.
** It RETURNS THE TOTAL LENGTH OF THE STRING IT TRIES TO CREATE meaning
** the concat index of last char of dst incremented + src length
** if dst does not exists then its length is 0 and src length is returned
**
** case 1: length of src is smaller than spare empty space
** concatenation is possible, all src is copied after dst and copy ends with a
** null character '\0' if end of dstsize still not reached
**
** case 2: length of src is bigger than spare empty space
** The output string is truncated so it's caller's responsability to handle it
** concatenation is partially possible, src is copied after dst until end of
** dstsize is reached.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		concat;
	size_t		i;

	concat = 0;
	i = 0;
	while (dst[concat] && concat < dstsize)
		concat++;
	while (src[i] && (concat + i + 1 < dstsize))
	{
		dst[concat + i] = src[i];
		i++;
	}
	if (concat != dstsize)
		dst[concat + i] = '\0';
	return (concat + ft_strlen(src));
}
