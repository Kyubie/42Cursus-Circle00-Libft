/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:11:23 by grannou           #+#    #+#             */
/*   Updated: 2021/07/25 13:19:41 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** This function writes the character c in the file descriptor fd
** It has no return
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
