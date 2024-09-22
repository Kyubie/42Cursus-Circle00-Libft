/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:46:57 by grannou           #+#    #+#             */
/*   Updated: 2021/05/28 15:17:15 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns the numbers of characters in a null-terminated string
** the null-terminating character \0 is not included in the count.
** for example: ft_strlen("Hello World") will return 11.
** the counter is initialised at zero so int the while loop it first checks
** if the first element of the string exist (str[0]). if yes, it's incremented.
** as counter reaches '\0' ending character, it exits while loop and returns
** previous current length.
*/

size_t	ft_strlen(const char *s)
{
	size_t		length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
