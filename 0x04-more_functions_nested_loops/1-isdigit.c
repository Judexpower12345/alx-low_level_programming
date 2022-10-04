#include "main.h"

/**
 * _isdigit - checks for lowercase character.
 * @c: c is the argument passed to thefunction.
 * Return: 1 if c is uppercase
 */
int _isdigit(int c)
{
	/**
	 * if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	*/
	return (c >= 48 && c <= 57);
}
