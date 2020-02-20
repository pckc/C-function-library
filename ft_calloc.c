/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 15:35:15 by pde-carv          #+#    #+#             */
/*   Updated: 2020/02/15 20:40:43 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
