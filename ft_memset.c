/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:32:14 by pde-carv          #+#    #+#             */
/*   Updated: 2020/01/29 17:01:25 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	swap;

	swap = 0;
	while (swap < len)
	{
		((unsigned char*)b)[swap] = c;
			swap++;
	}
	return(b);
}
