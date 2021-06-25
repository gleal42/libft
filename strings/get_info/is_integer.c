/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 21:06:42 by gleal             #+#    #+#             */
/*   Updated: 2021/06/25 21:12:33 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_info.h"

int	is_integer(char *str)
{
	if (!str)
		return (0);
	if (*str == '+' | *str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}