#include "main.h"

/**
 * print_last_digit - checks numbers
 * @j: the argument passed when the function print_last_digit is called
 * Return: Retruns the value of the last digit
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
