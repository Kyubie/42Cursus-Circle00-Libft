/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 13:10:44 by grannou           #+#    #+#             */
/*   Updated: 2021/08/21 11:54:40 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function converts the string str to its integer representation
** (AsciiTOInteger, AsciiTOLLong)
** It increments the string index until reaching digit characters:
** -----
** • Skip space characters: whitespace ' ' (32), horizontal tab '\t' (9),
** line feed '\n' (10), vertical tab '\v' (11), form feed '\f' (12) and
** carriage return '\r' (13)
** -----
** • As native atoi skip one sign: plus '+' (43) or minus '-' (45)
** to skip consecutive signs, replace if with while
** -----
** • Handles digit character:
** for each, it multiplies by ten (first by zero) to increase decimal then add
** character ASCII value (48 to 57) - 0 ASCII value (48), to get int value
** -----
** • Ignores all characters after last digit
** -----
** • example: str = "    -427   "
** result = 0 * 10 + (52 - 48) = 0 + 4 = 4
** result = 4 * 10 + (50 - 48) = 40 + 2 = 42
** result = 42 * 10 + (55 - 48) = 420 + 7 = 427
** result = sign * result = -1 * 427 = -427
** -----
** To handle INT_MIN (-2 147 483 648), result is recasted in long long int
** because INT_MAX (2 147 483 647) includes 0.
** -----
** To handle LONG_MIN and LONG_MAX as the native atoll():
** greater than the max, min it goes to opposite limit and becomes negative
** case 1: result greater than LONG_MAX (9 223 372 036 854 775 807) as
** if result < 0 and sign positive then it returns -1
** case 2: result smaller than LONG_MIN (-9 223 372 036 854 775 808) as
** if result < 0 and sign negative then it returns 0
*/

int	ft_atoi(const char *str)
{
	int					sign;
	long long int		result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if ((result < 0) && (sign == 1))
		return (-1);
	if ((result < 0) && (sign == -1))
		return (0);
	return (sign * result);
}
