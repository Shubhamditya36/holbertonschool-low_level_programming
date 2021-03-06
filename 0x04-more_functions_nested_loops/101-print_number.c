#include "holberton.h"

/**
 * print_number - print integer numbers
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int num;

	if (n % 10 < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num < 10)
		_putchar('0' + (num % 10));
	else
	{
		print_number(num / 10);
		_putchar('0' + (num % 10));
	}
}
