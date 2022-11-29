#include "lists.h"
/**
 *find_listint_loop - find loop in a list that contains ints
 *@head: pointer to the first elements of the list
 *Return: Address of the repeated element
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = head;
	temp2 = head;
	while (temp1 && temp2 && temp2->next)
	{
		temp1 = temp1->next;
		temp2 = temp2->next->next;
		if (temp1 == temp2)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return ((void *)temp2);
		}
	}
	return (NULL);
}
