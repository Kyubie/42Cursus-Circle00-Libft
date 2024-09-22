/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:49:44 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 19:30:28 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies string src to string dst according to dstsize
** (buffersize of dst, \0 included, it should alway be longer than dst length)
** It copies dstsize - 1 characters and NULL terminates the result if
** dstsize is not 0 (can't be negative because size_t type)
** It RETURNS THE TOTAL LENGTH OF THE STRING IT TRIES TO CREATE
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	if (!dst)
		return (0);
	i = 0;
	while (src[i] && (i + 1 < dstsize))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
