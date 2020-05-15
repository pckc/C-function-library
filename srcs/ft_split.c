/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:48:28 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/15 15:12:15 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Parse a string searching for a delimiter and split the string,
**	in an array containing the found strings.
**
**	Parameters
**	----------
**	char const *s: the string to split.
**	char c: the char to be used as delimiter.
**
**	Returns
**	-------
**	An array of the strings resulted from the split.
**	NULL in case the allocation fails.
*/

int		count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && i == 0)
			words++;
		else if (s[i] && s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

char	*ft_getfields(int *a, const char *s, char c)
{
	char	*field;
	int		j;
	int		i;

	i = *a;
	field = NULL;
	while (s[i] == c)
		i++;
	j = i;
	while (s[i] && s[i] != c)
		i++;
	if (!(field = (char *)malloc((i - j + 1) * sizeof(char))))
		return (NULL);
	i = j;
	while (s[i] && s[i] != c)
	{
		field[i - j] = s[i];
		i++;
	}
	field[i - j] = '\0';
	while (s[i] && s[i] == c)
		i++;
	*a = i;
	return (field);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		k;
	char	**split;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(split = (char **)malloc((words + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	k = 0;
	while (k < words)
	{
		split[k] = ft_getfields(&i, s, c);
		k++;
	}
	split[k] = NULL;
	return (split);
}
