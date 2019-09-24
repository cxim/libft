/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:00:58 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/09 12:51:23 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int		a;
	int		b;

	a = 0;
	if (!*str2 && !*str1)
		return ((char *)str1);
	while (str1[a])
	{
		b = 0;
		while (str2[b] == str1[a + b] && str2[b] && str1[a + b])
			b++;
		if (!str2[b])
			return ((char *)&str1[a]);
		a++;
	}
	return (0);
}
