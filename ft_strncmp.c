/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:26:19 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:56:48 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Compares the bytes of two different buffers.
**
**	Parameters
**	----------
**	const char *s1: pointer to the first element of the 1st string.
**	const char *s2: pointer to the first element of the 2nd string.
**	size_t n: maximum number of bytes to compare.
**
**	Returns
**	-------
**	0: if the two strings are identical.
**	<0: the element pointed to by s1 is less than the one pointed to by s2.
**	>0: the element pointed toby s1 is greater than the one pointed to by s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
