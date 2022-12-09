#include <stdio.h>
#include <stdlib.h>

/**
 *  main - returns alphabets both in lower and upper case
 *
 *   Return: Always 0 (Success)
 *
 */
int main(void)
{
	int alp = 'a';
	int ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}

	putchar('\n');
	return (0);
}
