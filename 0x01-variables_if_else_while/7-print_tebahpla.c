#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	char m;

	for (m = 'z' ; m >= 'a' ; m--)
	putchar(m);

	putchar('\n');
	return (0);
}
