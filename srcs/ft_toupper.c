/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:40:18 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/04 15:57:36 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description
**	-----------
**	Converts lowercase characters to uppercase ones.
**
**	Parameters
**	----------
**	int c: the character to be converted.
*/

int	ft_toupper(int c)
{
	if (c == '\0')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
