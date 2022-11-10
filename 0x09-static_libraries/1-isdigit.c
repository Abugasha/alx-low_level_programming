/**
 *_isdigit - checks if the value is a digit
 *@c: input caracter
 *
 *Return: 1 if is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
