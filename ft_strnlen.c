/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 18:07:32 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/06 01:37:46 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Checks the total length of a string up to a maximum value.
**
**	Parameters
**	----------
**	const char *src: A pointer to the string.
**	size_t maxlen: Maximum size of the string.
**
**	Returns
**	-------
**	The lenght of the string.
*/

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while ((*s++ != '\0') && (len < maxlen))
		len++;
	return (len);
}
