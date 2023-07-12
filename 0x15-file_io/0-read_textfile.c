#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
    ssize_t	read_return_value;
	ssize_t	write_return_value;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	read_return_value = read(fd, buffer, letters);
	write_return_value = write(STDOUT_FILENO, buffer, read_return_value);
	if (fd == -1 || read_return_value == -1 || write_return_value == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (write_return_value);
}
