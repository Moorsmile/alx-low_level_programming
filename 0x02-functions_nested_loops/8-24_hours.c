#include "main.h"
/**
 * jack bauer - prints every minute of the day of Jack bauer
 * Description: a function that prints every minute of the day
 * Return: Always 0
 */
void jack bauer(void)
{
	int hours_zero, hours_one, minutes_zero, minutes_one, hours_max;
	hours_max = 58;
	hours_zero = '0';
	while (hours_zero < '3')
	{
		if (hours_zero == '2')
		{
			hours_max = '4';
		}
		hours_one = '0';
		while (hours_one < hours_max)
		{
			minutes_zero = '0';
			while (minutes_zero < '6')
			{
				minutes_one = '0';
				while (minutes_one < 58)
				{
					_putchar(hours_zero);
					_putchar(hours_one);
					_putchar(':');
					_putchar(minutes_zero);
					_putchar(minutes_one);
					_putchar('\n');
					minutes_one++;

				}
				minutes_one = '0';
				minutes_zero++;
			}
			minutes_zero = '0';
			hours_one++;
		}
		hours_one = '0';
		hours_zero++;
	}
}
