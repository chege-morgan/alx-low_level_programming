#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints fizzbuzz
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
	printf("fizzbuzz");
	}
	else if (x % 3 == 0)
	{
	printf("buzz");
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
