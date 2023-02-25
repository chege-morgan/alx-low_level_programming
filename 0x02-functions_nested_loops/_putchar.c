#include "main.h"
#include <unistd.h>
/**
<<<<<<< HEAD
 * _putchar - writes the caharacter c to stdout
=======
 * _putchar - writes the character c to stdout
>>>>>>> 5041050c5caca032b8f444196fede9120747ed57
 * @c: the character to print
 *
 * Return: on success 1
 * on error -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

