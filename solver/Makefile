##
## EPITECH PROJECT, 2021
## Makefile solver
## File description:
## Create an archive of the library
##

CC	=	gcc

SRC	=	./src/solver.c	\
		./src/display_help.c	\
		./src/init_struct.c	\
		./src/find_maze_size.c	\
		./src/clear_maze.c	\
		./src/follow_path.c	\
		./src/display_maze.c	\
		./src/handle_file_content.c

MAIN	=	./main.c

OBJ	=	$(SRC:.c=.o)

OBJMAIN	=	$(MAIN:.c=.o)

CFLAGS	+=	-Wall -Wextra -W

LFLAGS	=	-L./lib -lmy

LIB_PATH	=	./lib/my

HEADER_PATH     =       ./includes

CPPFLAGS	=	-I./includes

NAME	=	solver

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJMAIN)
	$(MAKE) -C $(LIB_PATH)
	$(CC) -g3 -o $(NAME) $(OBJ) $(OBJMAIN) $(LFLAGS) $(CFLAGS)

clean:
	$(MAKE) -C $(LIB_PATH) fclean
	$(RM) $(OBJ)
	$(RM) $(OBJMAIN)

fclean:	clean
	$(RM) $(NAME)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *~

re:	fclean all
