/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 20:20:36 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/14 18:26:45 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Returns a new string, result of the concatenation of two given strings.
**
**	Parameters
**	----------
**	char const *s1: the first string (prefix).
**	char const *s2: the second string (suffix).
**
**	Returns
**	-------
**	A new string, result of the concatenation of 's1' and 's2'
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenght;
	char	*s3;

	lenght = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	s3 = malloc(sizeof(char) * (lenght + 1));
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*s3 = (char)*s1;
		s1++;
		s3++;
	}
	while (*s2 != '\0')
	{
		*s3 = (char)*s2;
		s2++;
		s3++;
	}
	*s3 = '\0';
	return (s3 - lenght);
}
