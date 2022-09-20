#include <stdio.h>

/**
 * main - Print all the letters except
 * use only putchar function
 * Return: Always 0.
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') && (a != 'q'))

		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
