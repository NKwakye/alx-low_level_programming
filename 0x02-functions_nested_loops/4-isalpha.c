#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic characters.
 *
 * @c: single letter input
 *
 * Return: 1 if c is a lower or uppercase letter, 0 if anything else.
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >- 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
