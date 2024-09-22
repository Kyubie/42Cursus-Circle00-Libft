/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:36:01 by grannou           #+#    #+#             */
/*   Updated: 2021/05/19 19:30:58 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** This function applies f function (which takes two arguments: an unsigned int
** and a char) on each character of string s, allocates enough memory to a new
** string, copy of modified s, copies it and return a pointer to new string,
** NULL if malloc() failed
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = -1;
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	while (s[++i])
		new_str[i] = f(i, s[i]);
	new_str[i] = '\0';
	return (new_str);
}
