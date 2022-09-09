#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - base 16 numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
