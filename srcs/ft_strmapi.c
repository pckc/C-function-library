/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:49:22 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/15 14:37:31 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
** Iterates trough the string 's' applying the function 'f' to each character,
** thus generating a new string from this applications.
**
**	Parameters
**	----------
**	char const *s: the string to be iterated.
**	char (*f)(unsigned int, char): the function to be applied.
**
**	Returns
**	-------
** The string created from the applications of the function 'f'.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		if (!(fstr = (char *)malloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[i] != 0)
		{
			fstr[i] = f(i, s[i]);
			i++;
		}
		fstr[i] = '\0';
		return (fstr);
	}
	return (NULL);
}
