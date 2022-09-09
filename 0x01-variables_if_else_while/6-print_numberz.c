#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - all single digits of numbers in base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
