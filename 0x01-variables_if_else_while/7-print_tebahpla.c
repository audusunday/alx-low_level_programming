#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Lowercase alphabet in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
