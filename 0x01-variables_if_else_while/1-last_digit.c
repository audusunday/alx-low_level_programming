#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_dit;

	n = rand() - RAND_MAX / 2;
	last_dit = n % 10;

	if (last_dit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dit);
	}
	else if (last_dit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dit);
	}
	else if (last_dit < 6 && last_dit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dit);
	}
	return (0);
}


