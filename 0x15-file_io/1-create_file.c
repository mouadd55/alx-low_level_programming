#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename pointer
 * @text_content: string to be written pointer
 * Return: -1 for failure, 1 for success.
 */

int create_file(const char *filename, char *text_content)
{
	int	fd;
	int	len;
	int	write_return_value;

	len = 0;
	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_return_value = write(fd, text_content, len);
	if (fd < 0 || write_return_value < 0)
		return (-1);
	close(fd);
	return (1);
}
