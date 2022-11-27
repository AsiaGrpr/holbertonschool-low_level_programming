#include "main.h"
#include <unistd.h>

/**
 * main - function that copies the content of a file to another file
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, rd;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while ((rd = read(fd1, buff, 1024)))
	{
		if ((write(fd2, buff, rd)) != rd || fd2 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
