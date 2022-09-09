#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print lower case alphabet from a to z except e and q
 *
 *  Return:Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= z; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}	putchar("\n");
}
