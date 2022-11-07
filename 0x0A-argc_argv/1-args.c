#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the programme
 * @argc: counts arguement
 * @argv: aguement
 *
 * Return: alwayss 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
