#include "main.h"

/**
 * print_alphabet_x10 - program to print lowercase alphabet 10 timmes
 *
 * Return: always o
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i =0; i <= 9; i++);
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		putchar('\n');
	}
}
