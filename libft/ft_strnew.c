/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:12:19 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/09 17:05:21 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	if (size + 1 == 0)
		return (NULL);
	if (!(new = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(new, '\0', size + 1);
	return (new);
}
