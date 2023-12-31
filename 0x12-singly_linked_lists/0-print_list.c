#include "lists.h"

/**
 *print_list - function that prints all the elements of a list_t list.
 *@h: single linked list
 *
 * Return: number_count.
 */
size_t print_list(const list_t *h)
{
	size_t number_count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

				h = h->next;
				number_count++;
	}
	return (number_count);
}


