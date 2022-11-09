/**
 *_isupper - checks if the value is a digit
 *@c: input caracter
 *
 *Return: 1 if is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
