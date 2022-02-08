# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 15:43:58 by gleal             #+#    #+#              #
#    Updated: 2021/07/03 16:15:05by gleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
FLAGS := -Wall -Wextra -Werror -g 
INCLUDE_DIRS := .
INCLUDES := $(addprefix -I, $(INCLUDE_DIRS))
NAME := libft.a
SRCS := ./strings/memory_related/ft_strjoin.c \
	./strings/memory_related/ft_split.c \
	./strings/memory_related/ft_substr.c \
	./strings/memory_related/ft_strtrim.c \
	./strings/memory_related/ft_strdup.c \
	./strings/modify/ft_strlcpy.c \
	./strings/modify/ft_toupper.c \
	./strings/modify/ft_strmapi.c \
	./strings/modify/ft_strlcat.c \
	./strings/modify/ft_tolower.c \
	./strings/get_info/ft_strnstr.c \
	./strings/get_info/ft_strlen.c \
	./strings/get_info/ft_strchr.c \
	./strings/get_info/ft_strrchr.c \
	./strings/get_info/ft_strncmp.c \
	./strings/get_info/is_integer.c \
	./numbers/ft_atoi.c \
	./numbers/ft_itoa.c \
	./print/ft_putstr_fd.c \
	./print/ft_putnbr_fd.c \
	./print/ft_putendl_fd.c \
	./print/ft_putchar_fd.c \
	./char_info/ft_isdigit.c \
	./char_info/ft_isascii.c \
	./char_info/ft_isprint.c \
	./char_info/ft_isalpha.c \
	./char_info/ft_isalnum.c \
	./memory_operations/ft_memcmp.c \
	./memory_operations/ft_bzero.c \
	./memory_operations/ft_memcpy.c \
	./memory_operations/ft_memccpy.c \
	./memory_operations/ft_memchr.c \
	./memory_operations/ft_memset.c \
	./memory_operations/ft_memmove.c \
	./memory_operations/ft_calloc.c \
	./linked_lists/ft_lstadd_back.c \
	./linked_lists/ft_lstnew.c \
	./linked_lists/ft_lstlast.c \
	./linked_lists/ft_lstclear.c \
	./linked_lists/ft_lstiter.c \
	./linked_lists/ft_lstmap.c \
	./linked_lists/ft_lstsize.c \
	./linked_lists/ft_lstadd_front.c \
	./linked_lists/ft_lstdelone.c \
	./linked_lists/ft_lstswap.c \
	./linked_lists/ft_print_list.c \
	./linked_lists/ft_isinlist.c

OBJS := $(SRCS:.c=.o)

all: $(NAME) 

%.o : %.c
	$(CC) $(FLAGS) -c $^ -o $@ $(INCLUDES)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: libft minilibx all bonus clean fclean re
