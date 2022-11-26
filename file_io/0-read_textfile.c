#include "main.h"
#include <unistd.h>

/**
 * read_textfile - f° that reads a text file and prints it
 * @filename: name of the file
 * @letters: is the number it should read and print
 *
 * Return: actual number of lettersit could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename)
	{
		buf = malloc(sizeof(char) * letters);
		if (!buf)
			return (0);

		rd = read(fd, buf, letters);
		buf[letters] = '\0';

		close(fd);
	}
	return (write(STDOUT_FILENO, buf, rd));
}

