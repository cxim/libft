/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:51:49 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/09 12:52:49 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *f1, size_t len)
{
	size_t		a;
	size_t		b;

	a = 0;
	if (!*f1)
	{
		return ((char *)s1);
	}
	while (s1[a] && (a < len))
	{
		b = 0;
		while (f1[b] == s1[a + b] && f1[b] &&
				s1[a + b] && ((a + b) < len))
			b++;
		if (!f1[b])
			return ((char *)&s1[a]);
		a++;
	}
	return (0);
}
