#include<stdio.h>
#include"lists.h"

void first(void) __attribute__ ((nonstructor));

/**
 * first - prints a sentence befor the main
 * function is excuted
 */

void first(void)
{
printf("You're best! amd yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}