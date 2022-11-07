SRC = ./ft_strlen.c \
			./ft_strmapi.c \
			./ft_striteri.c \
			./ft_putchar_fd.c \
			./ft_putstr_fd.c \
			./ft_putendl_fd.c \
			./ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o)

CFLAGS += -Wextra -Werror -Wall

NAME = libft.a

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

all : $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

exec: all
	 gcc test/ft_$(f).c -L. -lft 
	 ./a.out 