#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: represent the number
 * Return: always 0
 */
int print_last_digit(int)
{
	int last_digit = n % 10;
	
	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
