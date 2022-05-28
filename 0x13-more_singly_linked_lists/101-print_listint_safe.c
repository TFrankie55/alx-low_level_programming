#include "lists.h"

/**
 * print_listint_safe - main function
 * @head: pointer to head
 *
 * Return: i
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("[%p] %d", head, head->n);
		i++;
		head = head->next;
	}
	return (i);
}
