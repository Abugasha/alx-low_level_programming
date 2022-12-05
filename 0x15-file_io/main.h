#ifndef _MAIN_H
#define _MAIN_H
/* Structure definition*/
/**
 * struct classes - dictionary to store tables
 * @key: key to enter value
 * @value: string value
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct classes
{
	char key;
	char *value;
} dict_classes;
/*Space for including libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/*Space for functions prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
