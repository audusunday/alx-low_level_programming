#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Program print different combination of three different digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i, j;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (c < i && i < j)
				{
					putchar(c);
					putchar(i);
					putchar(j);
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
