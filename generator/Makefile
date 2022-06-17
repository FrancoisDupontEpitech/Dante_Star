##
## EPITECH PROJECT, 2021
## Makefile generator
## File description:
## Create an archive of the library
##

CC	=	gcc

SRC	=	./src/generator.c	\
		./src/display_help.c	\
		./src/handle_error.c	\
		./src/generator_imperfect_maze.c	\
		./src/generator_perfect_maze.c	\
		./src/generate_rectangle.c	\
		./src/delete_random_walls.c

MAIN	=	./main.c

OBJ	=	$(SRC:.c=.o)

OBJMAIN	=	$(MAIN:.c=.o)

CFLAGS	+=	-Wall -Wextra -W

LFLAGS	=	-L./lib -lmy

LIB_PATH	=	./lib/my

HEADER_PATH     =       ./includes

CPPFLAGS	=	-I./includes

NAME	=	generator

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
