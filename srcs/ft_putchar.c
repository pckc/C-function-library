/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 01:33:55 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/06 01:32:49 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given character.
**
**	Parameters
**	----------
**	char c: the character to be outputed.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
