#include"main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @r: an integer input
 * Description: print with _putchar declared
 *
 * Return: Value of the last digit of number
 */

int print_last_digit(int r)
{
	int i;

	if (r < 0)
	{
		i = -1 * (r % 10);
	}
	else
	{
		i = r % 10;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
