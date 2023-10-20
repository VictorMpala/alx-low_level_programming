#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - print
 * @c: print char
 * Return: the char to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
