/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:49:01 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/13 14:52:04 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	if (lst)
	{
		head = f(lst);
		if (head == NULL)
			return (NULL);
		current = head;
		while (lst->next)
		{
			lst = lst->next;
			current->next = f(lst);
			if (current->next == NULL)
				return (NULL);
			current = current->next;
		}
		return (head);
	}
	return (NULL);
}
