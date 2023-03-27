#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct Funcs - structur for functions
 * @format: format
 * @f: function
 */
typedef struct Funcs
{
	char *format;
	int (*f)(va_list);
} func_s;

int _putchar(char);
int _printf(const char *, ...);
int print_char(va_list);
int print_string(va_list);
int print_number(va_list);
int print_percentage(va_list);

#endif
