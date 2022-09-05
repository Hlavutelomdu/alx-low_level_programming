#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, r, a, b;
	char buf[BUFSIZ];
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (a < 0 || b < 0)
	{
		if (a  0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}

