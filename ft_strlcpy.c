/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 18:57:25 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/03 00:14:46 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Copies as string up to (dstsize - 1) from the source string to the
**	destiny string
**
**	Variables
**	---------
**	char *dst: A pointer to the destination string
**	const char *src: A pointer to the source string
**	size_t dstsize: Size of the destination buffer
**
**	Returns
**	-------
**	The lenght of the string, meaning the length of src
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;

	len_src = ft_strlen(src);
}
