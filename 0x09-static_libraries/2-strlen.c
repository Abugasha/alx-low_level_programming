/**
 *_strlen - returns data len
 *@s: input string
 *
 *Return:an int number
 *
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != 0)
	{
	counter++;
	}
	return (counter);
}
