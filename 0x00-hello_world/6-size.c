#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: 1 byte(s)\n", sizeof(char));
	printf("size of an int: 4 bytes(s)\n", sizeof(int));
	printf("Size of a long int: 8 bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: 8 bytes(s)\n", sizeof(long long int));
	printf("Size of a float: 4 bytes(s)\n", sizeof(float));

	return (0);
}

