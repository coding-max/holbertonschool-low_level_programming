#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t length = listint_len(*head);
	size_t i;
	int data;
	listint_t *h;

	h = NULL;
	for (i = 0; i < length; i++)
	{
		data = pop_node(get_node(*head, i));
		h = add_node(&h, data);
	}

	return (h);
}

/**
 * pop_node - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_node(listint_t **head)
{
	int data = (*head)->n;
	listint_t *first_node = *head;

	*head = first_node->next;
	free(first_node);

	return (data);
}

/**
 * get_node - returns the nth node of a listint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
listint_t *get_node(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}

/**
 * add_node - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
listint_t *add_node(listint_t *head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = head;
	head = new;

	return (new);
}