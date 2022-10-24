#include "lists.h"
#include <stdio.h>
/**
 * print_list - A function that prints a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes that were printed
 */
size_t print_list(const list_t *h)
{
int num_nodes = 0;

while (h)
{

if (h->str == NULL)

printf("[0] (nil)\n");

else

printf("[%d] %s\n", h->len, h->str);

h = h->next;

num_nodes++;
}
return (num_nodes);
}
