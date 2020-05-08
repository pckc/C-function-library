/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 23:48:26 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/08 17:32:58 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Converts characters to integers
**
**	Parameters
**	----------
**	int n: the integer to be converted
**
**	Returns
**	-------
**	The converted integer with its apropriate signal
*/

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		n_cpy;

	i = 0;
	n_cpy = n;
	while (n_cpy)
	{
		n_cpy = n_cpy / 10;
		i++;
	}
	if ((n_cpy = n) <= 0)
		i++;
	if ((s = (char *)malloc(sizeof(char) * (i + 1))) == 0)
		return (0);
	s[i] = '\0';
	while (i--)
	{
		s[i] = ((n_cpy < 0) ? -1 : 1) * (n_cpy % 10) + '0';
		n_cpy /= 10;
	}
	s[0] = (n < 0) ? '-' : s[0];
	s[0] = (n == 0) ? '0' : s[0];
	return (s);
}

/*
** char	*ft_itoa(int n)
** {
** 	char	*s;
** 	int		i;
** 	int		n_cpy;
**
** 	i = 0;
** 	n_cpy = n;
** 	while (n_cpy)
** 	{
** 		n_cpy = n_cpy / 10;
** 		i++;
** 	}
** 	n_cpy = n;
** 	if (n <= 0)
** 		i++;
** 	s = (char *)malloc(sizeof(char) * (i + 1));
** 	if (s == NULL)
** 		return (NULL);
** 	s[i] = '\0';
** 	while (i--)
** 	{
** 		s[i] = (n_cpy % 10);
** 		s[i] = s[i] * ((n_cpy < 0) ? -1 : 1);
** 		s[i] = s[i] + '0';
** 		n_cpy /= 10;
** 	}
** 	if (n < 0)
** 		s[0] = '-';
** 	if (n == 0)
** 		s[0] = '0';
** 	return (s);
** }
*/
