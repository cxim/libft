/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:24:36 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/09 14:25:11 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*cpy;

	if (size + 1 == 0)
		return (NULL);
	if (!(cpy = (void*)malloc(sizeof(void) * (size + 1))))
		return (NULL);
	ft_bzero(cpy, size + 1);
	return (cpy);
}
