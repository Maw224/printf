#include "main.h"

/**
 * print_string - main block
 * @args: list of args
 * Return: num of chars printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
