/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:35:05 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 17:56:18 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function tests if c value is either in letter or digit values of the
** ASCII table, as:
** from 65 (A) to 90 (Z), from 97 (a) to 122 (z), from 48 (0) to 57 (9)
** It returns 1 if True, 0 if False
** As ft_isalpha() tests if c is a lowercase/uppercase letter and ft_isdigit()
** tests if c is a digit, we can use both.
*/

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
