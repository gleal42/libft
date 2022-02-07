/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 21:06:42 by gleal             #+#    #+#             */
/*   Updated: 2022/02/07 00:11:24 by gleal            ###   ########.fr       */
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

int	is_within_lims(char *strg, char sign)
{
	int	i;

	i = 0;
	if (ft_strlen(strg) > 10)
		return (0);
	if (ft_strlen(strg) == 10)
	{
		if (strg[0] <= '2'
			&& strg[2] <= '4'
			&& strg[1] <= '1'
			&& strg[3] <= '7'
			&& strg[4] <= '4'
			&& strg[5] <= '8'
			&& strg[6] <= '3'
			&& strg[7] <= '6'
			&& strg[8] <= '4'
			&& ((sign == '-' && strg[9] <= '8')
				|| (sign != '-' && strg[9] <= '7')))
			return (1);
		return (0);
	}
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

int	is_integer(char *str)
{
	char	*strg;

	if (!str)
		return (0);
	strg = str;
	if (*strg == '+' || *strg == '-')
	{
		strg++;
	}
	if (!is_all_digits(strg))
	{
		return (0);
	}
	if (! is_within_lims(strg, *str))
	{
		return (0);
	}
	return (1);
}
