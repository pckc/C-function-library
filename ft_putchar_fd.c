/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 01:44:49 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/06 01:46:34 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given character to a given file descriptor.
**
**	Parameters
**	----------
**	char c: the character to be outputed.
**	int fd: the file descriptor on which to output.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
