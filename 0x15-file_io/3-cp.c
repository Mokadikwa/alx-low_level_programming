#include "main.h"

/**
 * print_error - prints error message
 * @message: message to be printed
 */

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * exit_with_error - exits with error message
 * @code: code
 * @message: message to be printed
 */
void exit_with_error(int code, const char *message)
{
	print_error(message);
	exit(code);
}

/**
 * close_fd - close fd
 * @fd: fd
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy_file - copies the content of a file to another file
 * @file_from: does not exist, or if you can not read it, exit with code 98
 * @file_to: already exists, truncate it
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_with_error(98, strerror(errno));
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		exit_with_error(99, strerror(errno));
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			exit_with_error(99, strerror(errno));
		}
	}
	if (bytes_read == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		exit_with_error(98, strerror(errno));
	}
	close_fd(fd_from);
	close_fd(fd_to);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to");
	}
	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
