/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 09:18:41 by grannou           #+#    #+#             */
/*   Updated: 2021/03/10 14:25:01 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function replace the len first bytes of b memory location with
** the NULL character, which int value equals 0
** It is like ft_memset function with 0 as argument for c
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
