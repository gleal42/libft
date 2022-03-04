/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:48:09 by gleal             #+#    #+#             */
/*   Updated: 2022/03/04 16:05:15 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_INFO_H
# define GET_INFO_H

# include "libft.h"

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);

int		is_within_lims(char *strg);
int		is_all_digits(char *str);
int		is_integer(char *str);

#endif
