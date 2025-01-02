# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 11:49:38 by marksylaiev       #+#    #+#              #
#    Updated: 2024/09/26 03:17:25 by marksylaiev      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Vars
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# Src
SRC_MEMORY = ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
SRC_STR = ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c
SRC_MISC = ft_atoi.c ft_bzero.c ft_calloc.c ft_itoa.c ft_tolower.c ft_toupper.c ft_substr.c ft_split.c ft_striteri.c
SRC_PUT = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
SRC_IS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

SRCS = $(SRC_MEMORY) $(SRC_STR) $(SRC_MISC) $(SRC_PUT) $(SRC_IS)
OBJS	= $(SRCS:.c=.o)

# Rules of files
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# Rules of actions
.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all