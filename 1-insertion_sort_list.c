/**
 * insertion_sort_list - Sorts a doubly
 * linked list of integers in ascending order
 * using the insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 *
 * Description: This function sorts a
 * doubly linked list using the insertion sort
 * algorithm. It iteratively moves through
 * the list and places each element in its
 * correct position relative to the elements
 * before it. The list is printed after
 * each swap.
 *
 * Return: None.
 */

#include"sort.h"

void insertion_sort_list(listint_t **list)
{

listint_t *current;
if (*list == NULL)
{
return;
}

if ((*list)->next == NULL)
{
return;
}

for (current = (*list)->next; current != NULL; current = current->next)
{
while (current->prev != NULL && current->n < current->prev->n)
{

if (current->next != NULL)
current->next->prev = current->prev;
current->prev->next = current->next;


current->next = current->prev;
current->prev = current->prev->prev;

if (current->prev != NULL)
current->prev->next = current;

else
*list = current;
current->next->prev = current;
print_list(*list);
}

}
}
