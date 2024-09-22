/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:12:58 by grannou           #+#    #+#             */
/*   Updated: 2021/08/30 15:37:42 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function writes the integer n in the file descriptor fd
** It has no return
** To handle INT_MIN (-2 147 483 468): because INT_MAX (2 147 483 467)
** recast n in long int
** As ft_putnbr() recursivity is done, meaning the function calls itself until
** each digit between 0 and 9 is written in fd by ft_putchar_fd()
*/

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nbr;

	nbr = (long long int)n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}
