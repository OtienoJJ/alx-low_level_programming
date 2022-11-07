#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return:always 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variable*/
	unsighned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (lisdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
