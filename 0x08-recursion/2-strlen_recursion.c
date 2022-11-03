#include "main.h"

/**
 * _strlen_recursion - Returns the lengh of the string
 * @s: the string to be measured
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
