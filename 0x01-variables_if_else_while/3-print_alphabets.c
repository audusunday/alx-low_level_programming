#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - print lower case alphabet from a to z
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
