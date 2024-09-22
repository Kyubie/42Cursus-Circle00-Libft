/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:03:21 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 19:31:08 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function lexicographically compare the n first bytes of unsigned char
** the two null-terminated strings s1 and s2
** CAREFUL: in ASCII table digit < uppercase letter < lowercase letter values
** If we compare n bytes of the strings, we have to start at n - 1 index
** Return values:
** • case 1: char of s1 is greater than char s2 (s1 is after s2 in ASCII)
** it returns an int value greater than 0
** • case 2: n first bytes of s1 and s2 identical
** it returns int value 0
** • case 3: char of s1 is smaller than char s2 (s1 is before s2 in ASCII)
** it returns a negative int value
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
