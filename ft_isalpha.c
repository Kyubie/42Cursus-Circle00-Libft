/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:42:05 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 17:56:29 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function tests if c value is in letter values of the ASCII table, as:
** from 65 (A) to 90 (Z), from 97 (a) to 122 (z)
** It returns 1 if True, 0 if False
** c is either a lowercase OR uppercase letter.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
