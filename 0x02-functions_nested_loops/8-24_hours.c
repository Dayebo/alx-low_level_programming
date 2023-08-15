#include"main.h"

/**
 * jack_baur - Prints every minute of the day of Jack Baur
 * Description: Print the time in minutes for 24 hrs
 *
 * Return: time in minutes
 */
void jack_bauer(void)
{

	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');

		}
	}
}
