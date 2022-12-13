#include <stdio.h>
/**
 * main - A program that computes and prints the sum of all the multiples
 *  of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int i, eql;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			eql += i;
	printf("%d\n", eql);
	return (0);
}
