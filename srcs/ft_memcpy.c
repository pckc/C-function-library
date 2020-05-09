/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:31:48 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:53:33 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Copies bytes from a source string to a destiny string.
**
**	Parameters
**	----------
**	void *dest:	a pointer to the string where the data will be copied.
**	const void *src: a pointer to the string to be copied from.
**	size_t n: number of bytes to be copied.
**
**	Returns
**	-------
**	A pointer to the destination string.
*/

void				*ft_memcpy(void *dest, const void *src, size_t n)
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
		i++;
	}
	return (destiny);
}
