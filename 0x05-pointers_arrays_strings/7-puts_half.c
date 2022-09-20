#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int j, i = 0;

	while (str[i] != '\0')
		i++;
	j = i / 2;
	if (i % 2 == 1)
		j++;
	while ( j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
