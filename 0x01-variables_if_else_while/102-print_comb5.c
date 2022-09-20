#include <stdio.h>
#include <unistd.h>

/**
 * main - Main block
 * prints all possible combination of 2-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with 2 digits.
 * 1 should be printed as 01
 * The combinations of numbers should be printed in ascending order
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int c, i, k, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
				if (((k + j) > (c + i) &&  k >= c) || c < k)
				{
					putchar(c);
					putchar(i);
					putchar(' ');
					putchar(k);
					putchar(j);

					if (c + i + k + j == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
