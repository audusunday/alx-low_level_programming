#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @: string to be used
 * 
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _srlen_recursion(s + 1);
	}
}
