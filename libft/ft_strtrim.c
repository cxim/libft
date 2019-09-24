/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:00:04 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/13 17:04:59 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	left_ws(char const *s)
{
	size_t		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static size_t	right_ws(char const *s)
{
	size_t		i;

	i = ft_strlen(s) - 1;
	while (i > 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i--;
	return (ft_strlen(s) - 1 - i);
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		size;
	size_t		j;
	char		*str;

	j = 0;
	if (s)
	{
		if (left_ws(s) == ft_strlen(s))
			return (ft_strdup(""));
		size = ft_strlen(s) - right_ws(s) - left_ws(s);
		if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
			return (NULL);
		i = left_ws(s);
		while (i < left_ws(s) + size)
			str[j++] = s[i++];
		str[j] = '\0';
		return (str);
	}
	return (0);
}
