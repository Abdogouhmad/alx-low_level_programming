#include "main.h"
/*by div-styl*/
/**
 * allocate_buf - allocate buffer
 * @str: string
 * Return: buffer
*/
char *allocate_buf(char *str)
{
	char *buffer;

	buffer  = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close file
 * @fd: file descriptor
 * Return: void
*/
void close_file(int fd)
{
	int closefile;

	closefile = close(fd);
	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char *buffer;

	if  (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buf(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	r = read(fd_from, buffer, BUFF_SIZE);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(fd_to, buffer, r);
		if  (fd_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd_from, buffer, BUFF_SIZE);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	{
		free(buffer);
		close_file(fd_from);
		close_file(fd_to);
		return (0);
	}
}
