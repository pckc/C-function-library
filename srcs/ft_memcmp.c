/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:56:35 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/14 20:07:29 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Compares the bytes of two different buffers.
**
**	Parameters
**	-----------
**	const void *s1: pointer to the first element of the 1st buffer.
**	const void *s2: pointer to the first element of the 2nd buffer.
**	size_t n: maximum number of bytes to compare.
**
**	Returns
**	-------
**	0: if the two buffers are identical.
**	<0: the element pointed to by s1 is less than the one pointed to by s2.
**	>0: the element pointed toby s1 is greater than the one pointed to by s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (aux_s1[i] != aux_s2[i])
			return (aux_s1[i] - aux_s2[i]);
		i++;
	}
	return (0);
}
