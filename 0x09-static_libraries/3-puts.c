#include "main.h"
/**
 *_puts - display string in standar output
 *@str: input string
 *
 *Returns: None
 *
 */
void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != 0)
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
