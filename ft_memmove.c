/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:34:23 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:53:19 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Copies "len" bytes from a source string to a destiny string.
**	This function handles (allows) overlapping regions, unlike ft_memcpy.
**
**	Parameters
**	----------
**	void *dst:	a pointer to the string where the data will be copied.
**	const void *src: a pointer to the string to be copied from.
**	size_t len: number of bytes to be copied.
**
**	Returns
**	-------
**	A pointer to the destination string (the value of destiny).
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*aux_dst;
	char	*aux_src;

	i = -1;
	aux_dst = (char*)dst;
	aux_src = (char*)src;
	if (dst == 0 && src == 0)
		return (0);
	if (dst < src)
	{
		while (++i < len)
			aux_dst[i] = aux_src[i];
	}
	else
	{
		while (len > 0)
		{
			aux_dst[len - 1] = aux_src[len - 1];
			len--;
		}
	}
	return (dst);
}
