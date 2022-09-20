#include <stdio.h>

/**
 * main - Print single digit number of base 10
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
