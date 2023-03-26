#include "main.h"

/**
 * print_char - main block
 * @args: list of args
 * Return: count of chars printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
