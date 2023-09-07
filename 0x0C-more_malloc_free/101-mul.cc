#include"main.h"

/**
 * _puts - prints a string, followed by a new line;
 * @astr: pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _atoi - converts a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(nonst char *s)

