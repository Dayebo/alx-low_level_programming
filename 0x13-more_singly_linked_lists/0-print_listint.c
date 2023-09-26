#include"lists.h"

/**
 * print_listint - prints all the elements of alinked list
 * @h: linked list of tyope listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);

}