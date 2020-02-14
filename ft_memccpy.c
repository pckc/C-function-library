/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 07:24:37 by pde-carv          #+#    #+#             */
/*   Updated: 2020/02/14 16:51:32 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *destination, const void *source, int c, size_t num)
{
	size_t			i;
	//unsigned char	*dest;
	//unsigned char	*src;

	i = 0;
	//dest = (unsigned char *)destination;
	//src = (unsigned char *)source;

	if (destination == 0 && source == 0)
		return (0);
	while (num != '\0' && i < num)
	{
		*((unsigned char *)destination) = ((unsigned char *)source)[i];

		if ((unsigned char *)source)[i] == ((unsigned char)c)
			return ();
		i++;
	}
	return(0);    
}
