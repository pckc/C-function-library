/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 15:35:15 by pde-carv          #+#    #+#             */
/*   Updated: 2020/03/11 13:20:34 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates memory space from the heap, for an array with "count" objetcs
**
**	Variables
**	---------
**	size_t count: number of objetcs in the array
**	size_t size: size of the elements, in bytes
**
**	Returns
**	-------
*/

void		*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	bytes;

	bytes = count * size;
	ptr = malloc(sizeof(unsigned char) * (bytes));
	if (ptr > 0)
		ft_memset(ptr, 0, bytes);
	return (ptr);
	if (ptr == 0)
		return (NULL);
}
/*
** 	if (bytes == 0)
**  		return(NULL);
**
**
** 	if (count == 0 || size == 0)
** 		return (ft_calloc(1, 1));
*/
