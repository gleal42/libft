/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:01:26 by gleal             #+#    #+#             */
/*   Updated: 2022/03/06 19:44:48by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "bitwise.h"

void	print_bits(size_t size, void *ptr)
{
	int i;
	int j;
	unsigned char *conv;

	conv = (unsigned char *)ptr;
	i = size-1;
	while (i >= 0)
	{
		j = 7;
		while (j >= 0)
		{
			printf("%u", ((conv[i])>>j) & 1);
			j--;
		}
		i--;
	}
}
