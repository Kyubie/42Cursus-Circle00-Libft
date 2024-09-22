/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:39:53 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 19:31:56 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts an uppercase letter to the corresponding lowercase
** In the ASCII table, lowercase letter comes AFTER lowercase letter and the
** delta is 32. First, it checks if c value is in uppercase letter value,
** from 65 (A) to 90 (Z)
** If yes, it substract 32 to it (c += 32 same as c = c + 32) so c value is now
** from 65+32=97 (a) to 90+32=122 (z). If no, c keeps its original value.
** Later we could implement ft_isuppercase(int c) and use it here
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
