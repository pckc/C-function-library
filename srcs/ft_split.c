/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:48:28 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/14 19:29:48 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
** Iterates trough the string 's' applying the function 'f' to each character,
** thus generating a new string from this applications. 
**
**	Parameters
**	----------
**	char const *s: the string to be iterated.
**	char (*f)(unsigned int, char): the function to be applied.
**
**	Returns
**	-------
** The string created from the applications of the function 'f'.	
*/

int    ft_strlen_split(char *str, char c)
{
   int i;
   int j;

   i = 0;
   j = 0;
   while(str[i])
   {
      if(str[i] == c)
      {
          while(str[i] != '\0')
         {
            j++;
            i++;
         }
         return(j);
      }
      i++;
   }
   return(0);
}

char **ft_split(char const *s, char c)
{
   char *split;
   char ref;
   int i;
   int j;
   int count;
   char *ptr;
    
   i = 0;
   j = 0;
   split = (char*)s;
   ref = c;
   count = ft_strlen_split((char*)s, c);
   ptr = (char *)malloc(sizeof(char) * (count + 1));
   if (s == NULL)
      return(NULL);
   while(split[i] != '\0')
   {
      if(split[i] == c)
      {
         while (split[i] != '\0')
         {
            ptr[j] = split[i];
            j++;
            i++;
         }
         ptr[j] = '\0';
         return((char**)ptr);
      }
      i++;
   }
   free(ptr);
   return(0);
}
