/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:40:18 by pde-carv          #+#    #+#             */
/*   Updated: 2020/03/11 13:25:55 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts lowercase characters to uppercase ones
**
**	Variables
**	---------
**	int c: the character to be converted
*/

int	ft_toupper(int c)
{
	if (c == '\0')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
