/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:01:22 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:55:59 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Concatenates two strings, up to (dstsize - 1).
**
**	Parameters
**	----------
**	char *dst: A pointer to the destination string.
**	const char *src: A pointer to the source string.
**	size_t dstsize: Size of the destination buffer.
**
**	Returns
**	-------
**	The lenght of the string, meaning the lenght of "dst"
**	plus the length of "src".
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strnlen(dst, dstsize);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (*(src + i) != '\0' && ((dst_len + i) != dstsize - 1))
	{
		*(dst + dst_len + i) = *(src + i);
		i++;
	}
	*(dst + dst_len + i) = '\0';
	return (dst_len + src_len);
}
