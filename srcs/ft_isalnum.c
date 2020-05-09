/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:31:57 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:55:16 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Tests a character to see if it is numeric.
**
**	Parameters
**	----------
**	int c: the character to be tested.
*/

int	ft_isalnum(int c)
{
	if (c == '\0')
		return (0);
	else if (c >= 48 && c <= 57)
		return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
