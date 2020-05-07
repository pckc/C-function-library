/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:10:46 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/06 22:54:01 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Locates the first occurence of a substring inside a string, up to "len"
**	characters
**
**	Parameters
**	----------
**	const char *haystack: a pointer to the main string
**	const char *needle: a pointer to the substring to be located
**	size_t len: the maximum lenght to be searched
*/

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			while (haystack[i + j] == 0 && needle[j] == 0)
				return ((char *)haystack + i);
			j++;
		}
		if (needle[j] == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
