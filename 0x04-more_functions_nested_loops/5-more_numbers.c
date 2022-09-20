#include "main.h"

/**
 * more_numbers - This function prints 10 times the numbers
 * from 0-14, followed by a newline
 */

void more_numbers(void)
{
	int a, b, c;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				c = a / 10;
				_putchar(c + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
