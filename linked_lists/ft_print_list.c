/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:26:01 by gleal             #+#    #+#             */
/*   Updated: 2021/06/27 16:33:25 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void ft_print_list_long(t_list *list)
{
	int i;

	i = 1;

	while (list)
	{
		printf("The element number %d is %lld\n", i, (long long)list->content);
		list = list->next;
		i++;
	}
}

/* void ft_print_list_long(t_list *list)
{
	int i;

	i = 1;

	while (list)
	{
		printf("The element number %d is %lld\n", i, (long long)list->content);
		list = list->next;
		i++;
	}
} */