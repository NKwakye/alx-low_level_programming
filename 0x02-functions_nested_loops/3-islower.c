#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * Return: 1 if int c is lowercase, and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}