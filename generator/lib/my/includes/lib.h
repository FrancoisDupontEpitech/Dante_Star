/*
** EPITECH PROJECT, 2021
** lib.h
** File description:
** header files of my library
*/

#ifndef LIB_H_
    #define LIB_H_
    #define ATOD(x) (x - '0')
    #define DTOA(x) (x + '0')
    #define CAP_TO_D(x) (x - 'A')
    #include <stddef.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int is_negative(char const *str);
int get_nbr_from_str(char *str, int len);
int check_nbr_error(int sign, char *str, int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
int my_strcat(char **dest, char const *str1, char const *str2);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_str_isalpha(char const *str);
int my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char **my_str_to_word_array(char const *str);
int parse_string(char const *str, int *count, int *words_nb, int i);
void *my_memset(void *s, int c, size_t n);
int my_array_int_len(int const *str);
void display_int_2d_array(int **arr);
void display_str_2d_array(char **arr);
void free_str_2d_array(char **arr);
void free_int_2d_array(int **arr, int size);
int get_file_data(char const *filepath, char **buffer);
int get_file_data_using_stat(char const *filepath, char **buffer);
int read_file(int fd, char **buffer, int size);
int str_to_2d_array(char *buffer, char ***buffer_2d, char *delimiter);
void my_putstr_error(char const *error_msg);
int is_char_alphabetic(char c);
int get_str_sanatized_size(char *str);
void remove_all_extra_spaces(char *buffer, char *str, int start, int end);
int get_string_start(char *str);
int get_string_end(char *str);
char *clean_str(char *str);
char *get_first_nbr(char *str, char *dest);
char *sanatize_string(char *str);
int my_str_array_len(char **arr);
char *my_getstr(int nbr);

#endif /* MY_H_ */
