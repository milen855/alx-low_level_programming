#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer params
 *
 * Return: o
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < o)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
