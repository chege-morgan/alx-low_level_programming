#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints if number is positive, negative or 0
 * Return: Always
 */
int main(void)
{
	int n, be;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	be = n % 10;

	if (be > 0)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, be);
	}
	else if (be == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, be);
	}
	else if (be < 6 && be != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, be);
	}
	return (0);
}
