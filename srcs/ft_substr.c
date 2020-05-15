/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 10:49:25 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/15 04:25:05 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	From the string 's' returns a substring that begins at 'start'and
**	has the maximum size of 'len'.
**
**	Parameters
**	----------
**	const char *s: the original string
**	unsigned int start: the start of the substring inside the string *s.
**	size_t len: max lenght of the substring
**
**	Returns
**	-------
**	The substring, NULL if allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	if (!(s))
		return (NULL);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (len > ft_strlen(s) - start)
		len = (ft_strlen(s) - start);
	if (!(sub_str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	while (i < (start + len))
	{
		sub_str[i - start] = s[i];
		i++;
	}
	sub_str[i - start] = '\0';
	return (sub_str);
}
