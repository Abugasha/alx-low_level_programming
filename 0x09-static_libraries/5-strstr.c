#include <stdio.h>
/**
 *_strstr -  search characters in dest array
 *@haystack: original string
 *@needle: search
 *Return: array to first point
 *character
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int letter = 0, search = 0, max = 0;

	while (needle[max] != 0)
		max++;
	if (max == 0)
		return (haystack);
	for (letter = 0; haystack[letter] != 0; letter++)
	{
		if (haystack[letter] == needle[search])
		{
			search++;
		}
		else
		{
			search = 0;
		}
		if (search == max)
			break;
	}
	if (search == max)
		return (&haystack[letter - max + 1]);
	else
		return (NULL);
}
