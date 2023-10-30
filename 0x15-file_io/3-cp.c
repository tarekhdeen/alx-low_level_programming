#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error - print error
 * @exit_code: exit code
 * @message: message
 */
void print_error(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - main function
 * @argc: integer
 * @argv: caracter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		print_error(98, "Error: Can't read from file");

	fd_to = open(
	argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Write operation failed");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file");
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
