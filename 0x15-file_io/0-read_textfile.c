#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to,
 * the POSIX standard output
 * @filename: text file
 * @letters: number of letters it should read and print
 *
 * Return: if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer  = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_read);
}
