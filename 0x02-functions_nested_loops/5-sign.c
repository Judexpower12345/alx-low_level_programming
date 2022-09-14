#include "main.h"

/**
 * print_sign - checks numbers.
 * @n: this is the argument passed when the function print_sign is called.
 * Return: 1 if c is lowercase.
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
