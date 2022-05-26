#include "lists.h"
#include "stdio.h"

/**
 * print_listint - function that prints all elements
 * @h: list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != 0){
		printf("%d\n", h->n);
		h = h->next, j++;
	}
	return (j);
}
