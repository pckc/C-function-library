/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:49:07 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/13 11:48:29 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Adds a 'new' element to the beginning of the linked list and rearrange,
**	the pointers so the head of the list points to newly added element.
**
**	Parameters
**	----------
**	t_list **lst: a pointer to the first link of the list.
**	t_list *new: a pointer to the element to be added.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
