#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: 0
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
	{
		_putchar(hour / 10 + '0');
		_putchar(hour % 10 + '0');
		_putchar(':');
		_putchar(minute / 10 + '0');
		_putchar(minute % 10 + '0');
		_putchar('\n');
		hour++;
	}
		minute++;
	}
}
