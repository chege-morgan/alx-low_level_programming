#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{

	Printf("size of a int: %zu byte(s)\n", sizeof(int));
	Printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	Printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	Printf("size of a char: %zu byte(s)\n", sizeof(char));
	Printf("size of a float: %zu byte(s)\n", sizeof(float));
	Return(0);
}