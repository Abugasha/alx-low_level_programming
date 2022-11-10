#include <stdio.h>
/**
 *_strpbrk -  search characters in dest array
 *@s: original string
 *@accept: search
 *Return: array to first point
 *character
 */
char *_strpbrk(char *s, char *accept)
{
	char **pointer_to_s, **pointer_to_accept;
	unsigned int letter, search;

	pointer_to_s = &s;
	pointer_to_accept = &accept;
	for (letter = 0; s[letter] != 0; letter++)
	{
		for (search = 0; accept[search] != 0; search++)
		{
			if (*(*pointer_to_s + letter)
				== (*(*pointer_to_accept + search)))
			{
				return (*pointer_to_s + letter);
			}
		}
	}
	return (NULL);
}
