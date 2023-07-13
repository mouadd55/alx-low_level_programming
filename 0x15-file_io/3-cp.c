#include "main.h"

/**
 * main - copy info from file_from to file_to.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0.
*/
int main(int ac, char **av)
{
	int to_file, from_file;
	ssize_t l_write, close_fd, l_read = 1024;
	char content[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_file = open(av[1], O_RDONLY);
	if (from_file < 0)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98); }
	to_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_file < 0)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (l_read == 1024)
	{
		l_read = read(from_file, content, 1024);
		if (l_read < 0)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		l_write = write(to_file, content, l_read);
		if (l_write < 0)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	close_fd = close(from_file);
	if (close_fd < 0)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", from_file);
		exit(100); }
	close_fd = close(to_file);
	if (close_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", to_file);
		exit(100);
	}
	return (0);
}
