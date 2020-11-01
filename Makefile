CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SONAME	= libft.so

SRC		= $(wildcard ft_*.c)

OBJ		= $(SRC:.c=.o)

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

so: $(SONAME)

$(SONAME): $(OBJ)
	$(CC) $(CFLAGS) -shared -o $(SONAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(SONAME)

re: fclean all

.PHONY: all clean fclean re
