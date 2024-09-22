/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 08:32:47 by grannou           #+#    #+#             */
/*   Updated: 2021/07/05 15:34:49 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** This function allocates enough memory for a new string which is the result
** of s1 and s2 concatenation
** It returns a pointer to that new string, NULL if malloc() failed
** Here instead of using a second index j for s1 and s2, pointers are used
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_str)
		return (NULL);
	while (s1 && *s1)
		new_str[i++] = *s1++;
	while (s2 && *s2)
		new_str[i++] = *s2++;
	new_str[i] = '\0';
	return (new_str);
}
