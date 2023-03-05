#include <stdio.h>

/**
 * _putchar - writes a character c in stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
