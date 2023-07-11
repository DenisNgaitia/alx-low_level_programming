#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: this is the name of the file
 * @text_content: content to be added to end of the file
 * Return: 1 success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		w = write(fd, text_content, i);

		if (w != i)
			return (-1);
	}

	close(fd);
	return (1);
}

