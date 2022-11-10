#include <stdio.h>
/**
 *_strspn -  search characters in dest array
 *@s: original string
 *@accept: search
 *Return: Quantity of times characters appear
 *character
 */
unsigned int _strspn(char *s, char *accept)
{
	char **pointer_to_s, **pointer_to_accept;
	unsigned int letter, search, result = 0;

	pointer_to_s = &s;
	pointer_to_accept = &accept;
	for (letter = 0; s[letter] != 0 && s[letter] != ' '; letter++)
	{
		for (search = 0; accept[search] != 0; search++)
		{
			if (*(*pointer_to_s + letter)
				== (*(*pointer_to_accept + search)))
			{
				result++;
				break;
			}
		}
	}
	return (result);
}
