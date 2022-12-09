#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Prints the lowercase alphabet in reverse
 *
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
	char loalph;

	for (loalph = 'z'; loalph >= 'a'; loalph--)
		putchar(loalph);
	
	putchar('\n');

	return (0);
}
