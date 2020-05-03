/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:05:15 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/03 00:16:18 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Parameters
**	----------
**	Locates the first ocurrence of a byte in a buffer
**
**	Parameters
**	----------
**	const void *s : buffer you want to search
**	int c : byte you are looking for
**	size_t n: number of bytes to search in the string
**
**	Returns
**	-------
**	A pointer to the located byte
**	Another way to write the return is: return (&aux_s[i])
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux_s;

	i = 0;
	aux_s = (unsigned char *)s;
	if (s == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)aux_s)[i] == (unsigned char)c)
			return (void *)(aux_s + i);
		i++;
	}
	return (NULL);
}
