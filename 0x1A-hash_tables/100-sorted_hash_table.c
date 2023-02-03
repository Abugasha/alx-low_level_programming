#include "hash_tables.h"
int create_new_node(shash_node_t **new_node, char *key, char *value);

/**
 * shash_table_create - this function is in charge of
 * creating a fixed size hash table
 * @size: the size of the hash table
 * Return:  Pointer to the hash table array
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->array = calloc(size, sizeof(shash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}

/**
 * shash_table_set - this sets hash tables avoiding collision
 * @ht: hash table in which we want to set a new value
 * @key: key value, key that wants to be stored
 * @value: value associated with the key
 * Return: 1 if success 0 if something wrong happend
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int my_key;
	shash_node_t *new_node, *initial;

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
int create_new_node(shash_node_t **new_node, char *key, char *value)
{
	*new_node = malloc(sizeof(shash_node_t));
	if (*new_node == NULL)
		return (0);
	(*new_node)->key = strdup((char *) key);
	(*new_node)->value = strdup((char *) value);
	if ((*new_node)->value == NULL || (*new_node)->key == NULL)
		return (0);
	return (1);
}

/**
 * shash_table_get - this function gets a value from a table
 * @ht: hash table
 * @key: key to get the value from
 * Return: value or null
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int my_index;

	if (ht == NULL || key == NULL)
		return (NULL);
	my_index = key_index((const unsigned char *) key, ht->size);
	while (ht->array[my_index] != NULL)
	{
		if (strcmp((ht->array[my_index])->key, key) == 0)
		{
			return ((ht->array[my_index])->value);
		}
		ht->array[my_index] = (ht->array[my_index])->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0, counter = 0;
	shash_node_t *init = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			init = ht->array[i];
			while ((ht->array[i]) != NULL)
			{
				if (counter != 0)
				{
					printf(", ");
					fflush(stdout);
				}
				counter++;
				printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
				fflush(stdout);
				ht->array[i] = ht->array[i]->next;
			}
			ht->array[i] = init;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table
 * @ht: hash table to print
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0, counter = 0;
	shash_node_t *init = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			init = ht->array[i];
			while ((ht->array[i]) != NULL)
			{
				if (counter != 0)
				{
					printf(", ");
					fflush(stdout);
				}
				counter++;
				printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
				fflush(stdout);
				ht->array[i] = ht->array[i]->next;
			}
			ht->array[i] = init;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - safely frees a hash table
 * @ht: hash table to be freed
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *tmp = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while ((ht->array[i]) != NULL)
		{
			tmp = (ht->array[i])->next;
			free((ht->array[i])->key);
			free((ht->array[i])->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	free(ht);
}

