/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:12:27 by grannou           #+#    #+#             */
/*   Updated: 2021/03/12 11:33:00 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** This function writes the string s, followed by a newline character,
** in the file descriptor fd
** Here ft_putstr_fd() is used to write s, ft_putchar_fd() to write '\n'
** It has no return, except if s does not exist then ft_putstr_fd) handles it
*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
