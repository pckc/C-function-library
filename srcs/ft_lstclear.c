/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 15:33:57 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/13 11:48:33 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Deletes and frees a given element and all the sucessor elements from that
**	list. After this the pointer to the list is setted to NULL.
**
**	Parameters
**	----------
**	t_list **lst: the address of a pointer to an element.
**	void (*del)(void*): the address of the function use to delete an element
**	and free its memory.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*nextlst;

	while (*lst && del)
	{
		del((*lst)->content);
		nextlst = (*lst)->next;
		free(*lst);
		*lst = nextlst;
	}
	lst = NULL;
}
