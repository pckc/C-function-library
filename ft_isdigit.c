/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:42:46 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:54:42 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description
**	-----------
**	Tests a character to see if it is a decimal digit.
**
**	Parameters
**	----------
**	int c: the character to be tested.
*/

int	ft_isdigit(long long c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
