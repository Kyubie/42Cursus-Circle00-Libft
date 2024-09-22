/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:13:03 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 18:01:29 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function tests if c value is in digit values of the ASCII table, as:
** from 48 (0) to  57 (9). It returns 1 if True, 0 if False.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
