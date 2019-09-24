/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:14:25 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/12 18:04:10 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	size_t	c;
	char	*ret;

	if (s1 && s2)
	{
		c = ft_strlen(s1) + ft_strlen(s2);
		if (!(ret = (char*)malloc((c + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (s1[i])
		{
			ret[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
			ret[i++] = s2[j++];
		ret[i] = '\0';
		return (ret);
	}
	return (0);
}
