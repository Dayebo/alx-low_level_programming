#include"function_pointers.h"
#include<stdlib.h>

/**
 * print_name - print name
 * @name: name of
 * @f: pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
