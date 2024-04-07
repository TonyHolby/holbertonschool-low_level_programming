#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_usage - a function that prints "Usage: cp file_from file_to" if
 * the number of arguments is not correct one.
 */

void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * print_error - a function that prints an error message followed
 * by a new line
 * @error_message: the error message
 * @filename: the name of the file
 */

void print_error(const char *error_message, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", error_message, filename);
}

/**
 * print_close_error - a function that prints an error message if the file can
 * not be closed followed by a new line.
 * @fd: file descriptor
 */

void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
}

/**
 * main - Entry point
 * @argc: the number of argument
 * @argv: the value of the arguments
 * Return: the copy of the content of a file to another file
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_usage();
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file ", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to ", file_to);
		close(fd_from);
		return (99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error("Error: Can't write to ", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Error: Can't read from file ", file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1)
	{
		print_close_error(fd_from);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		print_close_error(fd_to);
		return (100);
	}

	return (0);
}
