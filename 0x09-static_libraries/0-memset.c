#include "main.h"

/**
 * _memset - fills buffer with constant byte
 * @s: points to the buffer
 * @b: the constant byte
 * @n: size of buffer to fill
 *
 * Return: pointer to destination buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
