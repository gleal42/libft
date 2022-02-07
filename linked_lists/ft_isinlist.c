/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:16:52 by gleal             #+#    #+#             */
/*   Updated: 2022/02/07 17:17:24 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

int	is_nbr_in_list(long long nbr, t_list *a)
{
	while (a)
	{
		if ((long long)a->content == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}
