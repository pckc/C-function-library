/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 01:45:45 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/03 00:24:32 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	
**
**	Parameters
**	----------
**	
*/

void    ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
			ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0 && n != -2147483648)
		{
			ft_putchar_fd('-', fd);
			n = n * (-1);
		}
		if (n / 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}