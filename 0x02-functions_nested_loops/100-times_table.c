#include "main.h"

/**
 * print_times_table - A function that prints the n times table,
 * starting with 0.
 * @n: input
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i, j, eql;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				eql = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (eql < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((eql % 10) + '0');
				}
				else if (eql >= 10 && eql < 100)
				{
					_putchar(' ');
					_putchar((eql / 10) + '0');
					_putchar((eql % 10) + '0');
				}
				else if (eql >= 100 && j != 0)
				{
					_putchar((eql / 100) + '0');
					_putchar((eql / 10) % 10 + '0');
					_putchar((eql % 10) + '0');
				}
				else
					_putchar((eql % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
