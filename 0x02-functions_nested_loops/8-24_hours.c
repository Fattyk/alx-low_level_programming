#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: None
 */

void jack_bauer(void)
{
	int hr_tens, hr_ones, min_tens, min_ones, hr_max;

	hr_max = 58;
	hr_tens = '0';
	while (hr_tens < '3')
	{
		if (hr_tens == '2')
		{
			hr_max = '4';
		}
		hr_ones = '0';
		while (hr_ones < hr_max)
		{
			min_tens = '0';
			while (min_tens < '6')
			{
				min_ones = '0';
				while (min_ones < 58)
				{
					_putchar(hr_tens);
					_putchar(hr_ones);
					_putchar(':');
					_putchar(min_tens);
					_putchar(min_ones);
					_putchar('\n');
					min_ones++;
				}
				min_ones = '0';
				min_tens++;
			}
			min_tens = '0';
			hr_ones++;
		}
		hr_ones = '0';
		hr_tens++;
	}
}
