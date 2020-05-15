/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:48:28 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/14 22:06:01 by pde-carv         ###   ########.fr       */
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

int	ft_strlen_split(char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			 while (str[i] != '\0')
			{
				j++;
				i++;
			}
			return(j);
		}
		i++;
	}
	return (0);
}

char **ft_split(char const *s, char c)
{
	char *split;
	char ref;
	int i;
	int j;
	int count;
	char *ptr;
	 
	i = 0;
	j = 0;
	split = (char*)s;
	ref = c;
	count = ft_strlen_split((char*)s, c);
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (s == NULL)
		return (NULL);
	while (split[i] != '\0')
	{
		if (split[i] == c)
		{
			while (split[i] != '\0')
			{
				ptr[j] = split[i];
				j++;
				i++;
			}
			ptr[j] = '\0';
			return ((char**)ptr);
		}
		i++;
	}
	free(ptr);
	return (0);
}
