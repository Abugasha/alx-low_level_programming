#include "lists.h"
/**
 *free_listint_safe - prints a list that contains ints
 *@h: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	int i = 0;
	void *temp;

	if (*h == NULL)
		return (0);
	for (i = 0; *h != NULL; i++)
	{
		temp = *h;
		*h = (*h)->next;
		if (temp <= (void *)*h)
		{
			if (h != NULL)
			{
				free(temp);
				*h = NULL;
			}
			i++;
			break;
		}
		free(temp);
	}
	return (i);
}
