/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:33:22 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/12 19:05:10 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t z)
{
	size_t		i;
	size_t		n;
	void		*arr;

	arr = (void*)src;
	n = z;
	i = 0;
	while (i < n)
	{
		if (!(char*)arr && !(char*)dst)
			return (dst);
		*((char*)dst + i) = *((char*)arr + i);
		i++;
	}
	return (dst);
}
