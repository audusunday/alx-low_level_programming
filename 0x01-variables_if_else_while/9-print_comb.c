#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - combinations of single digit numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c;
	while (c <= '9')
	{
		putchar(c);
	}
	if (c != '9')
	{
		putchar(',');
		putchar(' ');
	++c;
	}
	putchar('\n');
	return (0);
}
