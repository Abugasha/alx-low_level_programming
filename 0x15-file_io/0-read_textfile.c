#include "main.h"
/**
 *read_textfile - read text from a file and disp in stdout
 *@filename: name of the file
 *@letters: buffer size
 *Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd_error, result;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	rd_error = read(fd, buf, letters);
	if (rd_error == -1)
	{
		free(buf);
		return (0);
	}
	result = write(STDOUT_FILENO, buf, rd_error);
	free(buf);
	if (result != rd_error || result == -1)
		return (0);
	close(fd);
	return (result);
}
