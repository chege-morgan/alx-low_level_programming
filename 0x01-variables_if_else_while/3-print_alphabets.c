#include <stdio.h>

/**
 * Main - prints alpha in lower and upper case
 * Returns: Always 0
 */

int main(void)
{
	char ch;

	for (ch	= 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (ch = 'A'; ch <= 'z'; ch++)
	putchar(ch);

	putchar('\n')

	return (0);
}
