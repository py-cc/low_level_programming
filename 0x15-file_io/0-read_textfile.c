#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: Pointer to file.
 * @letters: Number of letters to write.
 *
 * Return: returns the actual number of letters it could read and print
 * or 0 if:
 * - the file can not be opened or read,
 * - if filename is NULL,
 * - if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int file, fd_read, fd_write;

	if (filename != NULL)
	{
		file = open(filename, O_RDONLY);
		if (file == -1)
			return (0);
		text = malloc(sizeof(char) * letters);
		if (text == NULL)
			return (0);
		fd_read = read(file, text, letters);
		if (fd_read == -1)
		{
			free(text);
			return (0);
		}
		fd_write = write(STDOUT_FILENO, text, fd_read);
		if (fd_write == -1)
		{
			free(text);
			return (0);
		}
		close(file);
		free(text);
		return (fd_write);
	}
	return (0);
}
