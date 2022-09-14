#include "main.h"

/**
 * _isalpha - checks for aplhabetic character.
 * @c: this is an argument passed when the function _isalpha is called.
 * Return: 1 if c is lowercase.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
