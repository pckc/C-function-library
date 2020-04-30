/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:17:21 by pde-carv          #+#    #+#             */
/*   Updated: 2020/03/11 13:26:04 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts uppercase characters to lowercase ones
**
**	Variables
**	---------
**	int c: the character to be converted
*/

int	ft_tolower(int c)
{
	if (c == '\0')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (c - ('A' - 'a'));
	return (c);
}
