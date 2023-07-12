#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Filename pointer
 * @text_content: String to add at file end
 * Return: -1 if filename is NULL, -1 for access violations, 1 for success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
    int w;
    int len;

    len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
