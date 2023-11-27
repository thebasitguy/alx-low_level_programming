#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the filename
 * @text_content: content to append
 *
 * Return: 1 if the file exists and/or success,
 * or -1 if the file does not exist or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nString;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nString = 0; text_content[nString]; nString++)
			;

		rw = write(fd, text_content, nString);

		if (rw == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

