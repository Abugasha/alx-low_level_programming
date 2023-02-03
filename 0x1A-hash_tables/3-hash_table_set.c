#include "hash_tables.h"
int create_new_node(hash_node_t **new_node, char *key, char *value);
/**
 * hash_table_set - this sets the information in hash tables avoiding collision
 * @ht: hash table in which we want to set a new value
 * @key: key value, key that wants to be stored
 * @value: value associated with the key
 * Return: 1 if success 0 if something wrong happend
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int my_key;
	hash_node_t *new_node, *initial;

	if (ht == NULL || key == NULL || value == NULL || *key == 0)
		return (0);
	my_key = key_index((const unsigned char *)key, ht->size);
	if (ht->array[my_key] == NULL)
	{
		if (create_new_node(&new_node, (char *)key, (char *)value) == 0)
			return (0);
		new_node->next = NULL;
		ht->array[my_key] = new_node;
		return (1);
	}
	else
	{
		initial = ht->array[my_key];
		while (ht->array[my_key] != NULL)
		{
			if (strcmp((ht->array[my_key])->key, key) == 0)
			{
				free(ht->array[my_key]->value);
				ht->array[my_key]->value = strdup((char *)value);
				if (ht->array[my_key]->value == NULL)
					return (0);
				ht->array[my_key] = initial;
				return (1);
			}
			ht->array[my_key] = (ht->array[my_key])->next;
		}
		if (create_new_node(&new_node, (char *)key, (char *)value) == 0)
			return (0);
		ht->array[my_key] = initial;
		new_node->next = ht->array[my_key];
		ht->array[my_key] = new_node;
		return (1);
	}
}
/**
 *create_new_node - this function initialize a new node
 *@new_node: address of the pointer to be used
 *@key: key to be created
 *@value: value associated with the key
 *Return: 1 Success, 0 Failed
 */
int create_new_node(hash_node_t **new_node, char *key, char *value)
{
	*new_node = malloc(sizeof(hash_node_t));
	if (*new_node == NULL)
		return (0);
	(*new_node)->key = strdup((char *) key);
	(*new_node)->value = strdup((char *) value);
	if ((*new_node)->value == NULL || (*new_node)->key == NULL)
		return (0);
	return (1);
}

