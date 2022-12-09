#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digitss
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* Prints tens */
	{
		for (ones = '0'; ones <= '9'; ones++)/* Prints ones */
		{
			if (!((ones == tens) || (tens > ones)))/*prevents repetition */
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
