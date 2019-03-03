##
## EPITECH PROJECT, 2017
## Makefile
## File descritpion:
## Makefile
##

CC	=	gcc -g

CFLAGS	=       -Wextra -W -Wall -Wparentheses -Wsign-compare -Wpointer-sign -Wuninitialized -Wunused-but-set-variable -g3 -I ./include

RM 	= 	rm -f

SRC	=	main.c 	\
		sources/file_gestion.c 	\
		sources/lib.c 	\
		sources/move.c	\
		sources/event.c	\
		sources/map_gestion.c 	\
		sources/navigate_in_map.c \
		sources/sokoban.c	\
		sources/window.c	\
		sources/replace_o.c 	\
		sources/usage.c	\
		sources/error_gestion.c	\
		sources/win_or_lose.c 	\

OBJS	=	$(SRC:.c=.o)

NAME	= 	my_sokoban

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) -lncurses

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all