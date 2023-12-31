#include"main.h"


/**
 * set_bit - sets a bit at a given index
 * @n: pointer
 * @index: index
 *
 * Return: 1 Success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
