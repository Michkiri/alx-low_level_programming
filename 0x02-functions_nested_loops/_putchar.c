#include "main.h"
#include <unistd.h>

/**
 * _putchar - rites the character c to stndout
 * @c: the character to print
 *
 *Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
