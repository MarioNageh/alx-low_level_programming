/* Created by mario on 5/8/2023. */
#include "main.h"

/**
 * append_text_to_file - append to file
 * @filename: file name
 * @text_content: content to write
 * Return: 1 if success -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, flag, i = 0;

	if (!filename)
		return (-1);


	flag = O_WRONLY | O_APPEND;
	fd = open(filename, flag);


	/* Failed To Open File or get File Descriptor */
	if (fd == -1)
		return (-1);


	if (!text_content)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	write(fd, text_content, i);
	close(fd);

	return (1);
}
