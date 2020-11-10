NAME		= libft.a

SONAME		= libft.so

HNAME		= libft.h

SRC 		= ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_strchr.c \
	ft_strrchr.c ft_strlcpy.c ft_strlcat.c \
	ft_strncmp.c ft_strnstr.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_atoi.c ft_strdup.c ft_calloc.c \
	ft_itoa.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_strmapi.c ft_split.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c

SRC_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ			= $(SRC:.c=.o)

OBJ_BONUS	= $(OBJ) $(SRC_BONUS:.c=.o)

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

.c.o: $(HNAME)
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HNAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus: $(OBJ_BONUS) $(HNAME)
	@ar rc $(NAME) $(OBJ_BONUS)
	@ranlib $(NAME)

so: $(SONAME)

$(SONAME): $(OBJ_BONUS) $(HNAME)
	@$(CC) $(CFLAGS) -shared -o $(SONAME) $(OBJ_BONUS)

clean:
	@$(RM) $(OBJ_BONUS)

fclean: clean
	@$(RM) $(NAME) $(SONAME)

re: fclean all

.PHONY: all clean fclean re
