#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: number of parameters.
 * Return: number of nodes.
 **/
size_t print_list(const list_t *h)
{
        size_t cont = 0;

        if (!h)
                printf("[0] (nil)\n");
        else
        {
                while (h->next)
                {
                        if (h->str)
                                printf("[0] (nil)\n");
                        else
                                printf("[%u] %s\n", h->len, h->str);
                        cont++;
                        h = h->next;
                }
                if (h->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", h->len, h->str);
                cont++;
        }
        return (cont);
}
