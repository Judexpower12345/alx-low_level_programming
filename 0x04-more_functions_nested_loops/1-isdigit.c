#include "main.h"

/**
 * _isdigit - A function that check for a digit 0 - 9
 * @c: input digit
 * Return: 1 if c is digit 0 if is not digit
 *
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
