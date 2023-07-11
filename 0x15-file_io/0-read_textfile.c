#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int		fd;
	char    *buffer;
	ssize_t	raed_return_value;
	ssize_t	write_return_value;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	raed_return_value = read(fd, buffer, letters);
	write_return_value = write(STDOUT_FILENO, buffer, raed_return_value);
	close(fd);
	free(buffer);
	return (write_return_value);
}
