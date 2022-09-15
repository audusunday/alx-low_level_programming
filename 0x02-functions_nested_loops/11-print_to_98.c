#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a program that prints all natural numbers from n to 98
 * @n: the number to begin with
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n > 98)
		printf("%d, " n--);
	printf("%d\n,", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
