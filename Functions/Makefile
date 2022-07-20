# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 16:10:35 by gafernan          #+#    #+#              #
#    Updated: 2022/07/20 17:06:41 by gafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c			\
	  ft_isdigit.c			\
	  ft_isalnum.c			\
	  ft_isascii.c			\
	  ft_isprint.c			\
	  ft_strlen.c			\
	  ft_strlcpy.c			\
	  ft_strlcat.c			\
	  ft_strncmp.c			\
	  ft_toupper.c			\
	  ft_tolower.c			\
	  ft_strnstr.c			\
	  ft_atoi.c				\
	  ft_strchr.c			\
	  ft_strrchr.c			\
	  ft_memset.c			\
	  ft_bzero.c			\
	  ft_memchr.c			\
	  ft_memcmp.c			\
	  ft_memcpy.c			\
	  ft_memmove.c			\
	  ft_calloc.c			\
	  ft_strdup.c			\
	  ft_substr.c			\
	  ft_strjoin.c			\
	  ft_strtrim.c			\
	  ft_itoa.c				\
	  ft_strmapi.c			\
	  ft_striteri.c			\
	  ft_putchar_fd.c		\
	  ft_putnbr_fd.c		\
	  ft_putendl_fd.c		\
	  ft_putstr_fd.c		\

INCLUDES = libft.h

OBJ = $(SRC:.c=.o)

CC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f

all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	@$(AR) $(NAME) $(OBJ)
	@echo "library created"

$(OBJ) : $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@$(RM) $(OBJ) $(BONUS_OBJS)
	@echo "objs deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "executable deleted"

re: fclean all

.PHONY: all clean fclean re bonus