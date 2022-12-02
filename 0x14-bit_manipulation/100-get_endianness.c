#include "main.h"
#define UREALONG unsigned long int
#define REALONG unsigned int
/**
 *get_endianness - checks if the processor is big or little
 *Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int byte = 0x01;
	void *pointer = &byte;

	if (*((char *)pointer + 0) == 1)
		return (1);
	else
		return (0);
}
