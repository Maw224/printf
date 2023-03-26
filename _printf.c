#include "main.h"
#include <stdarg.h>

/**
 * _printf - main block
 * @format: string format
 * @...: args to print
 * Return: count of chars printed
 */

int _printf(const char *format, ...)
{
	int i, j, count = 0;
	func_s funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"i", print_number},
		{"%", print_percentage}
	};
	va_list args;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 5; j++)
			{
				if (format[i + 1] == *(funcs[j].format))
					count += funcs[j].f(args);
			}
			i++;
		}
		else
			count += _putchar(format[i]);
	}
	va_end(args);
	return (count);
}
