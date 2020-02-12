/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:32:14 by pde-carv          #+#    #+#             */
/*   Updated: 2020/02/05 05:02:55 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	swap;

	swap = 0;
	if (len > 0)
	{
		while (swap < len)
		{
			((unsigned char*)b)[swap] = (unsigned char)(c);
			swap++;
		}
	}
	return (b);
}
