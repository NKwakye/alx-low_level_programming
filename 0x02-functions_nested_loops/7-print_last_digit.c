#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @ld: results of las t digit
 *
 * Return: Value of the last digit
 */

int print_last_digit(int ld)
{
	int pld;

	pld = (ld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
