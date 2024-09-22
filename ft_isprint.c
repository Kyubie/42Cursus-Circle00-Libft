/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:48:39 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 18:01:48 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function tests if c value is in the printable values of the ASCII table
** from 32 (whitespace) to 126 (tilde). It returns 1 if True, 0 if False
*/

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
