/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 15:25:46 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/13 11:04:04 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Iterates trought a linked list applying the function 'f' to each element.
**	From the application of this function creates a new list.
**
**	Parameters
**	----------
**	t_list *lst: a pointer to an element.
**	void (*f)(void*): the address of the used function.
**	void (*del)(void*): the address of the function used to delete an
**	element and free its memory.
**
**	Returns
**	-------
**	The newly created list or NULL if the alloction fails.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_lst;
	t_list		*node;

	new_lst = NULL;
	while (lst != NULL && f != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
