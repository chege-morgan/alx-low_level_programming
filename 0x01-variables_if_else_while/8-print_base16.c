#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int m;
	char ch;

	for (m = '0' ; m <= '9'; m++)
	putchar(m);
	for (ch = 'a' ; ch <= 'f' ; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
