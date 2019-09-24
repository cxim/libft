/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:13:34 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/03 14:13:36 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int	res;
	int nb1;

	res = 1;
	nb1 = nb / 2;
	if (nb > 46340 * 46340)
		return (0);
	if (nb <= 0)
	{
		return (0);
	}
	while (res <= nb1)
	{
		if (res * res == nb)
		{
			return (res);
		}
		if (res * res > nb)
		{
			return (0);
		}
		res++;
	}
	return (res);
}
