#include"main.h"

/**
 * get_endianness - checks for a machine
 * Return: 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
