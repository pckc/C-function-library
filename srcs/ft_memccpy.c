/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 07:24:37 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:54:15 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Copies bytes from a source string to a destiny string,
**	until the byte c is found.
**
**	Parameters
**	----------
**	void *dest:	a pointer to the string where the data will be copied.
**	const void *src: a pointer to the string to be copied from.
**	int c: 	byte that limits the copy.
**	size_t n: maximum number of bytes to be copied.
**
**	Returns
**	-------
**	A pointer to the byte after the occurence of c in the destiny string
**	destiny[i + 1].
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destiny;
	unsigned char	*source;

	i = 0;
	destiny = dest;
	source = (unsigned char*)src;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		destiny[i] = source[i];
		if (((unsigned char *)source)[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
