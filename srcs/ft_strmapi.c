/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:49:22 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/14 21:44:56 by pde-carv         ###   ########.fr       */
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
	int				j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		if(!(fstr = (char *)malloc(j * sizeof(fstr))))
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
