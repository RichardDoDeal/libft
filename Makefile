#gcc -c -Wall -Wextra -Werror ft_*.c
#ar rc libft.a ft_*.o
#SRCSDIR = $(shell pwd)/srcs

SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_strlen.c ft_isalpha.c ft_isascii.c \
			 ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			 ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			 ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

#_OBJS	= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

OBJSDIR	= $(shell pwd)

OBJS	= ${SRCS:.c=.o}

INCL	= includes

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc -c

NAME	= libft.a

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -I ${INCL} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re