/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:11:03 by gleal             #+#    #+#             */
/*   Updated: 2021/07/03 17:13:20 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	ft_lstswap(t_list **head)
{
	t_list *first_lst;
	t_list *third_lst;

	if (*head == 0 || (*head)->next == 0)
		return ;
	first_lst = *head;
	third_lst = (*head)->next->next;
	*head = (*head)->next;
	(*head)->next = first_lst;
	(*head)->next->next = third_lst;
	return ;
}
