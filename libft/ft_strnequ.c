/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:13:31 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/12 18:01:20 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *c1, char const *c2, size_t n)
{
	size_t		i;
	char		*s1;
	char		*s2;
	int			res;

	i = n;
	s1 = (char*)c1;
	s2 = (char*)c2;
	if (s1 && s2)
	{
		res = ft_strncmp(s1, s2, i);
		return (res == 0 ? 1 : 0);
	}
	return (0);
}
