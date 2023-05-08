/* Created by mario on 5/8/2023. */
#include "main.h"

/**
 * read_textfile
 * @filename: file name
 * @letters: letters to read
 * Return: number of read numbers 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread;
	char *data;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);


	/* Failed To Open File or get File Descriptor */
	if (fd == -1)
		return (0);

	data = malloc(letters);

	if (!data)
		return (0);

	nread = read(fd, data, letters);
	nread = write(STDOUT_FILENO, data, nread);

	return (nread);
}
