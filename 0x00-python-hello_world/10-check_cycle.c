#include "lists.h"

/**
 * check_cycle - check if the cycle is in the singly list
 * @list: pointer to the head of the sigly list
 * Return: 0 with the cycle, 1 without a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *ptr = list;
	listint_t *temp;

	if (list == NULL || list->next == NULL)
		return (0);
	temp = list;

	while (ptr->next != NULL && temp->next != NULL && temp->next->next != NULL)
	{
		ptr = ptr->next;
		temp = temp->next->next;
		if (ptr == temp)
			return (1);
	}
	return (0);
}
