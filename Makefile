# Makefile

NAME = sokoban

SRCS = main.c \
	userControle.c \
	board.c

all :  $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all