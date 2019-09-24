/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_unilsymb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:00:52 by mnarwhal          #+#    #+#             */
/*   Updated: 2019/09/13 13:01:52 by mnarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_unilsymb(const char *str, char c)
{
	const char *s;

	s = str;
	while (*s != c && *s)
		++s;
	return (s - str);
}
