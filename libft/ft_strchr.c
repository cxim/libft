/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:29:45 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/08 18:31:47 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *st, int c)
{
	char *str;

	str = (char*)st;
	while (*str || *str == c)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}
