/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:59:48 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/08 13:50:11 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*z;
	int				i;
	unsigned char	x;
	int				j;

	z = (unsigned char*)s;
	i = 0;
	x = (unsigned char)c;
	j = (int)n;
	while (i < j)
	{
		if (z[i] == x)
		{
			return (&z[i]);
		}
		i++;
	}
	return (NULL);
}
