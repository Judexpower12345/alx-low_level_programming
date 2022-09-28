#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

<<<<<<< HEAD
	_putchar((num % 10) + '0');}
=======
	_putchar((num % 10) + '0');
}
>>>>>>> c3178f82088db1f40d8008d655d101e6057901d2
