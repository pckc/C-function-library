/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:12:32 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/07 02:52:10 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Checks the pointed string and converts characters to integers
**
**	Parameters
**	----------
**	const char *str: a pointer to the string to parse
**
**	Returns
**	-------
**	The converted integer with its apropriate signal
*/

int			ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sinal;

	i = 0;
	num = 0;
	sinal = 1;
	if (*str == '\0')
		return (0);
	while (ft_isspace(str[i]) != '\0')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = (-1);
		i++;
	}
	while (str[i] == 0)
		i++;
	while (ft_isdigit(str[i]) != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sinal);
}
