#include "main.h"

/**
 * create_file -  creates a file
 * @filename:  name of the file to create
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int n;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	wr = write(fd, text_content, n);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
