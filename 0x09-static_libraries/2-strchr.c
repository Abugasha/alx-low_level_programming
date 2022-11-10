#include <stdio.h>
/**
 *_strchr -  sets memory values from *s to n quantity
 *@s: initial address
 *@c: value
 *Return: NULL if character not found, else; pointer to the first ocurrence of
 *character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
