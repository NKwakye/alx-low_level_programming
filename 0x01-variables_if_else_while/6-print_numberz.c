#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Prints all single digit numbers
 *  of base 10 starting from
 *  0 only using putchar and without char variables
 *
 *  Return: Always 0
 */
int main(void)
{
	int sdn;

	for (sdn = 0; sdn < 10; sdn++)
		putchar((sdn % 10) + '0');

	putchar('\n');
	return (0);
}
