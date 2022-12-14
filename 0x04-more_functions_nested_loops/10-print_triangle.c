#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle
 * @size: size parameter of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int inc1, int inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}
			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}
			if (inc1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
}
