#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: number of parameters.
 * Return: number of nodes.
 **/
size_t print_list(const list_t *h)
{
        const list_t *actual_node = h;
        size_t cont = 0;

        if (!actual_node)
        {
                printf("[0] (nil)");
        }

        while (actual_node->next)
        {
                if (actual_node->str)
                        printf("[0] (nil)");
                else
                        printf("[%d] %s", actual_node->len, actual_node->str);
                cont++;
                actual_node = actual_node->next;
        }
        if (actual_node->str)
                printf("[0] (nil)");
        else
                printf("[%d] %s", actual_node->len, actual_node->str);
        cont++;

        return (cont);
}
