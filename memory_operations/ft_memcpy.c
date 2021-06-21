/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 23:49:57 by gleal             #+#    #+#             */
/*   Updated: 2021/05/20 21:37:36 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_operations.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destn;
	unsigned char	*sourc;
	size_t			i;

	if (!dst && !src)
		return (0);
	destn = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destn[i] = sourc[i];
		i++;
	}
	return (dst);
}
