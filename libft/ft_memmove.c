/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:52:27 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/10 14:57:52 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*p1;
	const char	*p2;

	p2 = s2;
	p1 = s1;
	if (!p2 && !p1)
		return (NULL);
	if (p2 < p1 && p1 < p2 + n)
	{
		p2 += n;
		p1 += n;
		while (n-- != 0)
			*--p1 = *--p2;
	}
	else
		while (n-- != 0)
			*p1++ = *p2++;
	return (s1);
}
