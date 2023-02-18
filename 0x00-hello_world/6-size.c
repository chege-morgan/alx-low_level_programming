#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	Printf("size of a int: %lu byte(s)\n", (unsigned long) sizeof(a));
	Printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	Printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	Printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(d));
	Printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	Return(0);
}
