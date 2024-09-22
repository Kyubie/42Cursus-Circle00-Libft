/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:29:57 by grannou           #+#    #+#             */
/*   Updated: 2021/09/07 07:23:09 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates with malloc() enough memory for an array of strings
** which is created by spliting the string s with the character c as separator
** The array must be null-terminated
** Here malloc() is use twice: once for the size of the array then for the size
** of each word.
** CAREFUL: While filling the array, if a word malloc() failed, freeing the
** array won't be enough, as the previous created words will remain.
** To fully empty the array, words have to be freed backward then the array
** CAREFUL: here is just a function, not a program. Remember this rule:
** ****************************************************************************
**            "FOR EACH m/c/re/reall/v/alloc() ONE free()"
** ****************************************************************************
** When calling the function in main() mind call free() too
*/

#include "libft.h"

/*
** This function count the number of words in a string. Here a word means a bag
** of consecutive characters that are not c. As the loop is parsing s, when a
** char is found, count is incremented if next character is '\0' or c, else the
** parsing continues
*/
static int	count_words(char const *s, char c)
{
	int		wcount;

	wcount = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == '\0' || *(s + 1) == c))
			wcount++;
		s++;
	}
	return (wcount);
}

/*
** This function count the length of a word. Here a word means a bag of
** consecutive characters that are not c
*/
static int	ft_wordlen(char const *s, char c)
{
	int		wlen;

	wlen = 0;
	while (s[wlen] && s[wlen] != c)
		wlen++;
	return (wlen);
}

/*
** This function free() the array of words backwardly in the case the malloc()
** of a word in the array failed, it recursively free() each previous word then
** it free() the array
*/
static void	*ft_free(char **words, int wcount)
{
	while (wcount--)
		free(words[wcount]);
	free(words);
	return (NULL);
}

/*
** This function fills the word count words in the array. If a word malloc()
** failed, all previous words and the array are freed. The array, as each word
** string, is null-terminated
*/
static char	**fill(char const *s, int wcount, char c, char **words)
{
	int		i;
	int		j;
	int		wlen;

	i = 0;
	while (i < wcount)
	{
		while (*s == c)
			s++;
		wlen = ft_wordlen(s, c);
		words[i] = (char *)malloc(sizeof(char) * (wlen + 1));
		if (!words[i])
			return (ft_free(words, i));
		j = 0;
		while (j < wlen)
			words[i][j++] = *s++;
		words[i][j] = '\0';
		i++;
	}
	words[i] = NULL;
	return (words);
}

/*
** This function count the separated by c character words in string s. It
** allocates an array of word count size + 1 (for terminating '\0'). Then it
** fills the array with each word and return the array of splitted words.
*/
char	**ft_split(char const *s, char c)
{
	char	**words;
	int		wcount;

	if (!s)
		return (NULL);
	wcount = count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!words)
		return (NULL);
	words = fill(s, wcount, c, words);
	return (words);
}
