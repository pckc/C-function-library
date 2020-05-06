/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:28:39 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/05 20:52:15 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Converts a lowercase string to uppercase.
**	This function was overcomplicated for didactic reasons.
**	Using a counter to iterate over the array would be much simpler.
**
**	Parameters
**	----------
**	char *s: the string to be converted. 
*/

char	*ft_strupcase(char *s)
{
	//unsigned char *up = (unsigned char *)s;
	int len = ft_strlen(s);

	while (*s)
	{
/*
** 		TO TEST: ft_toupper((unsigned char)*s);
**		read about the necessity to cast it to unsigned char?
**		read: man toupper
**		Why ft_toupper isn't converting to uppercase?
*/
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}
	return ((char *)(s - len));
}