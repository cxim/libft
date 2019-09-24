/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:22:04 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/12 17:58:43 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s)
	{
		if (!(sub = (char*)malloc((len + 1) * sizeof(char))))
			return (NULL);
		if (sub)
		{
			ft_memcpy(sub, s + start, len);
		}
		sub[len] = '\0';
		return (sub);
	}
	return (0);
}
