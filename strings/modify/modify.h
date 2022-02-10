/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:48:17 by gleal             #+#    #+#             */
/*   Updated: 2022/02/10 15:48:18 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODIFY_H
# define MODIFY_H

# include "../../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_tolower(int c);

#endif
