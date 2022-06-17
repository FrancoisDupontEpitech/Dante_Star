/*
** EPITECH PROJECT, 2021
** my_printf.h
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    #define D_TO_UPPERCASE(x) (x + 'A')
    #define D_TO_LOWERCASE(x) (x + 'a')
    #include <stdarg.h>

int my_printf(char *s, ...);
void display_char(va_list *ap);
void display_int(va_list *ap);
void display_str(va_list *ap);
void display_unsigned_int(va_list *ap);
void display_octal(va_list *ap);
void display_binary(va_list *ap);
void display_hexadecimal_lowercase(va_list *ap);
void display_hexadecimal_uppercase(va_list *ap);
int get_ret_len(unsigned int nbr, int base);
void my_put_unsigned_int(unsigned int nb);
void display_all_bases(unsigned int nbr, int base);
void display_hexadecimal_void_ptr(va_list *ap);
void display_non_alpha_octal(va_list *ap);
void display_long(va_list *ap);

#endif /* !MY_PRINTF_H_ */
