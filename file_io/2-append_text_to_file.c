#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * * @filename: name of the file to use
 * @text_content: its content
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, size = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);
	if (!fd)
		return (-1);

	if (text_content)
	{
		size = strlen(text_content);
		wr = write(fd, text_content, size);
		if (!wr)
			return (-1);
	}
	close(fd);

	return (1);
}
