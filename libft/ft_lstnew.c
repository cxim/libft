/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:19:42 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/13 13:46:55 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (content && content_size)
	{
		tmp->content_size = content_size;
		if (!(tmp->content = (void *)malloc(sizeof(content_size))))
		{
			free(tmp);
			return (NULL);
		}
		ft_memcpy(tmp->content, content, content_size);
	}
	else
	{
		tmp->content_size = 0;
		tmp->content = NULL;
	}
	tmp->next = NULL;
	return (tmp);
}
