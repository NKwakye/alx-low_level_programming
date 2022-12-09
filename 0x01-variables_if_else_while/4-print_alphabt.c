#include <stdio.h>
#include <stdlib.h>

/**
 *  main - returns albhabets except both e and q
 *
 *  Return: Always 0 (Success)
 *
 */

int main (void)
{
	char aleq = 'a';

	while (aleq <= 'z')
	{
		if ((aleq != 'e') && (aleq != 'q'))
		{
			putchar(aleq);
		}
		aleq++;
	}
	putchar('\n');
	return (0);
}
