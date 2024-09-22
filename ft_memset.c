/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 08:07:26 by grannou           #+#    #+#             */
/*   Updated: 2021/03/10 09:27:45 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function replace the len first bytes of b with the unsigned char value
** of c.
** the size_t type is always positive so it copies while len >= 0
** While len positive, assign unsigned char value of c to each len index of b
** if len = 5 then it copies from b[4] to b[0]
*/

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((unsigned char *)b)[len] = (unsigned char)c;
	return (b);
}
