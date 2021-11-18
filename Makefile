# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltrinchi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 10:43:32 by ltrinchi          #+#    #+#              #
#    Updated: 2021/11/18 14:30:18 by lorampon         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isdigit.o \
		ft_isprint.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strdup.c \
		ft_split.c \
		ft_memmove.c \
		ft_strtrim.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_strjoin.c \
		ft_memcmp.c \
		ft_substr.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putchar_fd.c \
		ft_strmapi.c 




SRCSBNS = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lestdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJSBS = $(SRCSBNS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f


all: $(NAME)

%.o: %.c libft.h
#@echo "\033[0;33m Compiling:\033[0m" $<
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
#@echo "\033[0;32m [Build OK]\033[0m" $<

bonus: $(OBJS) $(OBJSBS)
	$(CC) $(CFLAGS) -c $^ -o $(<:.c=.o)

clean:
#@echo "\033[0;33m Cleaning:\033[0m" $<
	$(RM) $(OBJS)
#@echo "\033[0;36m [Cleaned]\033[0m" $<

fclean: clean
#@echo "\033[0;33m Cleaning:\033[0m" $<
	$(RM) $(NAME)
#@echo "\033[0;36m [Cleaned]\033[0m" $<

re: fclean all

.PHONY: all bonus clean fclean re
