/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:54:59 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 19:32:06 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts a lowercase letter to the corresponding uppercase
** In the ASCII table, uppercase letter comes BEFORE lowercase letter and the
** delta is 32. First, it checks if c value is in lowercase letter value,
** from 97 (a) to 122 (z)
** If yes, it substract 32 to it (c -= 32 same as c = c - 32) so c value is now
** from 97-32=65 (A) to 122-32=90 (Z). If no, c keeps its original value.
** Later we could implement ft_islowercase(int c) and use it here
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
