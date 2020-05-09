/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 01:45:45 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/06 23:21:10 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given integer, as a character, to a given file descriptor.
**
**	Parameters
**	----------
**	int n: the integer to output
**	int fd: fd means file descriptor, as in where the program will print
**	given number (0 is the stdin, 1 is the stdout, 2 is the stderr).
*/

void	ft_putnbr_fd(int n, int fd)
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

/*
**	In the last case n/10 is used as a boolean condition,
**	since in C zero is always false and anything else is true.
**	Other possibilities would be ((n/10) > 0 || (-n/10) > 0) or
**	(n >= 10 || n <= -10)
*/
