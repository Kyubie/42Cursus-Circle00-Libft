/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:46:43 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 17:56:43 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function tests if c value is in the values of the ASCII table, as:
** from 0 (NULL or '\0') to 127 (DEL)
** It returns 1 if True, 0 if False
** We have to write int values here because both limits are non printable
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
