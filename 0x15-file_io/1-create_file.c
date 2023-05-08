/* Created by mario on 5/8/2023. */
#include "main.h"

/**
 * create_file - create file and write content to it
 * @filename: file name
 * @text_content: content to write
 * Return: 1 if success 0 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, mode, flag, i = 0, status = 0;

	if (!filename)
		return (-1);


	/* rw- --- --- */
	/* 8 << 1  | 7 << 1 */
	/* S_IRUSR | S_IWUSR this 0x180 0600 octal */

	mode = S_IRUSR | S_IWUSR;
	flag = O_WRONLY | O_CREAT | O_TRUNC;
	fd = open(filename, flag, mode);


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
