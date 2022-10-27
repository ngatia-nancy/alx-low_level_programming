                                                   C - More singly linked lists
How to use linked lists.

0. 0-print_listint.c - a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes

1. 1-listint_len.c - a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

2. 2-add_nodeint.c - a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

3. 3-add_nodeint_end.c - a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

4. 4-free_listint.c - a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

5. 5-free_listint2.c - a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

6. 6-pop_listint.c - a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0 
