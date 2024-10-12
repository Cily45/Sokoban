# Makefile

NAME = sokoban

SRCS = main.c \
	playerControle.c \
	board.c \
	move.c

all :  $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all