#include "lists.h"
int check_cycle(listint_t *list)
{
	listint_t *slowPtr = list;
	listint_t *fastPtr = list->next;

	if (list == NULL || list->next == NULL)
	{
        	return (0);
	}
	while (fastPtr != NULL && fastPtr->next != NULL)
	{
		if (slowPtr == fastPtr)
		{
			return (1);
		}
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next->next;
	}
	return (0);
}	
