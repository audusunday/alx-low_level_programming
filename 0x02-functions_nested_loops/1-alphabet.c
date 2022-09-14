#include "main.h"

/**
 * main - to print alphabet
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
