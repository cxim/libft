/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:12:21 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/10 15:14:02 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if (s)
	{
		if (!(ret = (char*)malloc((ft_strlen(s) + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			ret[i] = (f)(s[i]);
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (0);
}
