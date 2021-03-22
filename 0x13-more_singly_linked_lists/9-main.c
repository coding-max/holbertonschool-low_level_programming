#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 0, 34047);
	print_listint(head);
	free_listint2(&head);
	printf("\n\n\n");

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 3, 34047);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 4, 34047);
	print_listint(head);
	free_listint2(&head);
	printf("\n\n\n");

	return (0);
}
