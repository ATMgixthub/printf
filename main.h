#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - struct specifier
<<<<<<< HEAD
 * @valid: the valid char
 * @f: the functions associated
=======
 * @valid: the valid character.
 * @f: the functions associated.
 *
>>>>>>> 155f2893315d36fe6d188500a4a3eac659acf29e
 */

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
<<<<<<< HEAD

=======
>>>>>>> 155f2893315d36fe6d188500a4a3eac659acf29e
#endif
