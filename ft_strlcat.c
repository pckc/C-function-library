/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:01:22 by pde-carv          #+#    #+#             */
/*   Updated: 2020/03/13 19:34:16 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/*
**	Concatenates two strings, up to (dstsize - 1)
**
**	Variables
**	---------
**	char *dst: A pointer to the destination string
**	const char *src: A pointer to the source string
**	size_t dstsize: Size of the destination buffer
**
**	Returns
**	-------
**	The lenght of the string, meaning the lenght of "dst"
**	plus the length of "src"
*/
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	len_buffer;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	len_buffer = (len_dst + len_src - 1);
	
	if (len_buffer > dstsize)
		len_buffer = '\0';
	return (len_buffer);
}
*/

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen) 
{
    size_t src_len;
	size_t dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strnlen(dst, maxlen);
    if ((dst_len == maxlen) && (maxlen != 0))
		return (maxlen+src_len);
    if (src_len < maxlen - dst_len)
      ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
      ft_memcpy(dst + dst_len, src, maxlen - 1);
      dst[dst_len + maxlen - 1] = '\0';
    }
    return (dst_len + src_len);
}

int	main(void)
{
	size_t i;

	i = ft_strlcat("abc", "dfg", 3);
	printf("%zu", i);
	return(0);
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{

    while (len_dst-- > 0)
        *dst++ = *src1++;
    while (len_src2-- > 0)
        *dst++ = *src2++;
  return (str);
}
*/
