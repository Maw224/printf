#include "main.h"
int _pr_num(int);

/**
 * print_number - main vlock
 * @args: list of args
 * Return: num of chars printed
 */

int print_number(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = n * -1;
	}

	count += _pr_num(n);
	return (count);
}

/**
 * _pr_num - prints the number
 * @n: number
 * Return: count of printed digits
 */

int _pr_num(int n)
{
	if (n / 10)
		_pr_num(n / 10);

	return (_putchar('0' + (n % 10)));
}
