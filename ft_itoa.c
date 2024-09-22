/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:09:19 by grannou           #+#    #+#             */
/*   Updated: 2021/07/26 13:06:40 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** This function allocates with malloc() enough memory for a string that is the
** conversion in char of the interger n given (IntergerTOAscii)
** Negative integers must be handled, as the negative sign of n must become the
** minus prefix character of n in the returned string
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/

/*
** This function counts the number of digits in integer n. This count will be
** usefull to know the size to malloc() later for the equivalent string.
** To do so, count is first incremented and each time n can be divided by ten,
** is incremented again.
** Careful to handle two special cases: if n is negative, increment count to
** provide size for minus character. Same if n equals zero
*/

static int	count_digit(int n)
{
	int		count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0 && ++count)
		n = n / 10;
	return (count);
}

/*
** This function allocates memory for the string that is filled backward
** with first null-terminating character '\0' then modulo 10 digits of n,
** recasted in long int to handle INT_MIN (-2 147 483 468).
** Careful to fill backward until count of digit is null if n positive, and
** until count of digit equals 1 if n negative because index 0 is for '-'
** Look for a method that fills the string forward.
*/

char	*ft_itoa(int n)
{
	char	*str;
	int		digit_count;
	long	nbr;
	int		i;

	nbr = n;
	digit_count = count_digit(nbr);
	str = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
		i++;
	}
	str[digit_count] = '\0';
	while (digit_count > i)
	{
		str[--digit_count] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
