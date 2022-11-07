#include <stdio.h>
#include "main.h"

/**
 * main - print the name programme
 * @argc: cout arguemnt
 * @argv: arguement
 *
 * Return: always 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	/*Declearing variables*/
	int cout = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguement*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
		return (0);
	}
}
		 
