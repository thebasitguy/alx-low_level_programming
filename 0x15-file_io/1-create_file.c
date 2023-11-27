#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the filename
 * @text_content: content to put in the file
 *
 * Return: 1 if successful or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nString;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nString = 0; text_content[nString]; nString++)
		;

	rw = write(fd, text_content, nString);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}

