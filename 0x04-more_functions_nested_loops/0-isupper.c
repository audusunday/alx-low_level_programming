#include "main.h"

/**
 * _isupper - checkes if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 if it is, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}

		return (0);
}
