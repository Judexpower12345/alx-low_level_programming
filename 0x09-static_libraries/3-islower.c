#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if not lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
