/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:44:26 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/12 17:59:51 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*arr;
	int		i;
	char	z;

	arr = (char*)str;
	i = ft_strlen(arr);
	z = (char)c;
	if (arr[i] == z)
		return (&arr[i]);
	while (i)
	{
		--i;
		if (arr[i] == z)
			return (&arr[i]);
	}
	return (0);
}
