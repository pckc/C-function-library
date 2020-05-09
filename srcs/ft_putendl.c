/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 14:49:05 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/06 23:49:22 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a string followed by a new line (\n) after its end.
**
**	Parameters
**	----------
**	char *s: the string to output
*/

void	ft_putendl(char *s)
{
	if (s != 0)
	{
		while (*s)
		{
			write(1, &*s, 1);
			s++;
		}
		write(1, "\n", 1);
	}
}
