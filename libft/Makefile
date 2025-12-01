# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjun-xi <gjun-xi@student.42singapore.sg>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/01 18:43:03 by gjun-xi           #+#    #+#              #
#    Updated: 2025/12/01 21:13:40 by gjun-xi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c
OBJ = $(SRC:.c=.o)

HEADER = libft.h

all : $(NAME)
$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)

re: fclean all
