#include <stdio.h>

/**
 * main - A program that finds and prints the sum of the even-valued terms
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long count, i, j, k, sums;

	i = sums = 0;
	j = i;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
