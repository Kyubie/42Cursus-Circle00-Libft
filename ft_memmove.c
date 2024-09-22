/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:26:48 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 19:30:15 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies len bytes from string src to string dst in a non
** destructive manner, meaning if src and dst overlap
** Overlap is check with comparing pointers address of src and dst:
** case 1: they are the same, then copy is useless and dst is returned
** case 2: if end of src overlaps beginning of dst, copy from end to start
** string "abcdefghijklmnop", dst = string[10], src = string[5], len = 8
** case 3: if end of dst overlaps beginning of src, copy from start to end
** string "abcdefghijklmnop", dst = string[0], src = string[5], len = 8
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (++i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
