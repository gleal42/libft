/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 21:06:42 by gleal             #+#    #+#             */
/*   Updated: 2022/03/04 16:07:37 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_info.h"

/*
** Checks if input is integer
** @param:	- [char *] string that will be analyzed
** @return:	int 1 if true
** Line-by-line comments:
** @line-line	comment
*/

// have to add something to check if it is bigger than max number

int	is_integer(char *str)
{
	char	*strg;

	if (!str)
		return (0);
	strg = str;
	if (*strg == '+' || *strg == '-')
		strg++;
	if (!is_all_digits(strg))
		return (0);
	if (!is_within_lims(strg))
		return (0);
	return (1);
}

int	is_all_digits(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_within_lims(char *strg)
{
	long	nbr;

	if (ft_strlen(strg) > 10)
		return (0);
	nbr = ft_atol(strg);
	if (nbr > INT32_MAX)
		return (0);
	if (nbr < INT32_MIN)
		return (0);
	return (1);
}
