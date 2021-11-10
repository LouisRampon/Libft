SRCS    = ft_atoi.c ft_split.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_bzero.c

OBJS    = $(addprefix srcs/, ${SRCS:.c=.o})

NAME    = libft.a

.c.o:
	gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
	ar -rcs ${NAME} $^

all:    ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re