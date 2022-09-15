#include "main.h"

/**
 * _isalpha - function that check alphabetic character
 * @c: is the int that will be used for the argument of the function
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
