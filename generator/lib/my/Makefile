##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Create an archive of the library
##

SRC	=	./my_putchar.c	\
		./my_put_nbr.c	\
		./my_getnbr.c	\
		./parse_getnbr.c	\
		./check_nbr_error.c	\
		./my_putstr.c	\
		./my_revstr.c	\
		./my_strcat.c	\
		./my_strcmp.c	\
		./my_strcpy.c	\
		./my_strdup.c	\
		./my_strlen.c	\
		./my_strncat.c	\
		./my_strncmp.c	\
		./my_strncpy.c	\
		./parse_string.c	\
		./my_memset.c	\
		./my_getstr.c	\
		./my_array_int_len.c	\
		./free_int_2d_array.c	\
		./my_printf/display_char_int_str.c	\
		./my_printf/display_long.c	\
		./my_printf/display_unsigned_int.c	\
		./my_printf/my_printf.c	\
		./my_printf/display_bases/display_all_bases.c	\
		./my_printf/display_bases/display_hexadecimal_lowercase.c	\
		./my_printf/display_bases/display_non_alpha_octal.c	\
		./my_printf/display_bases/display_binary.c	\
		./my_printf/display_bases/display_hexadecimal_uppercase.c	\
		./my_printf/display_bases/display_octal.c	\
		./double_linked_list/create_new_node.c	\
		./double_linked_list/display_list.c	\
		./double_linked_list/find_node.c	\
		./double_linked_list/free_list.c	\
		./double_linked_list/insert_after_node.c	\
		./double_linked_list/insert_at_end.c	\
		./double_linked_list/insert_at_head.c	\
		./double_linked_list/linked_list.c	\
		./display_2d_array.c	\
		./free_str_2d_array.c	\
		./get_file_content/get_file_data.c	\
		./get_file_content/get_file_data_using_stat.c	\
		./get_file_content/read_file.c	\
		./str_to_2d_array.c	\
		./my_putstr_error.c	\
		./get_char_array_line.c	\
		./my_str_array_len.c	\
		./sanatize_string/sanatize_string.c \
        ./sanatize_string/get_str_sanatized_size.c  \
        ./sanatize_string/remove_all_extra_spaces.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I./includes

NAME	=	libmy.a

CFLAGS	+=	-Werror -Wextra -W

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp includes/lib.h ../../includes/
	cp includes/exit.h ../../includes/
	cp -r includes/my_printf/ ../../includes/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f *~
	rm -f libmy.a
	rm -f ../$(NAME)

re:	fclean all
