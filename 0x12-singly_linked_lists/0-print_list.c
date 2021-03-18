#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: number of parameters.
 * Return: number of nodes.
 **/
size_t print_list(const list_t *h)
{
	size_t cont = 0;

	if (h)
	{
		while (h->next)
		{
			if (h->str)
				printf("[%u] %s\n", h->len, h->str);
			else
				printf("[0] (nil)\n");
			cont++;
			h = h->next;
		}
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		cont++;
	}

	return (cont);
}
