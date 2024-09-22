/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 10:36:19 by grannou           #+#    #+#             */
/*   Updated: 2021/03/10 14:27:58 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies n bytes from src memory location to dst memory location
** if src and dst overlap then behavior is undefined. It returns the original
** value of dst. Because it copies here from decrementing n index, it returns
** correctly original dst that points to first element ot memory location.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == src)
		return (dst);
	while (n--)
		((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}
