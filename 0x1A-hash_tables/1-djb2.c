/**
 *hash_djb2 - this algorithm creates a code from a string
 *@str: input string to get the index from
 *Return: hash index according to the string
 **/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

