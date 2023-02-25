#include "main.h"
/**
 *  print_last_digit -  function that prints the last digit of a number.
 *  @n: int
 *  Return: int value
 */
int print_last_digit(int n)
{
	int q;

	q = n % 10;
	if (q < 0)
		q = q * -1;

	_putchar(q + '0');

	return (q);
}

