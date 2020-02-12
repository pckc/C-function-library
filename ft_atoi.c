/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:12:32 by pde-carv          #+#    #+#             */
/*   Updated: 2020/02/12 10:52:47 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char const c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\r' || c == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sinal;

	i = 0;
	num = 0;
	sinal = 1;
	if (str == '\0')
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
