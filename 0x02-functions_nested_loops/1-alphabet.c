#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
