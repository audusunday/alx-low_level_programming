#include "main.h"
/**
 * jack_bauer - function that prints minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: 0;
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hour_remainder;
	int mins-remainder;

	while (hour <= 23)
	{
		while (minutes <= 59)
		{
			mins_remainder = minutes % 10;
			hour_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
	return (0);
}
