#include "main.h"

/**
 * create_file - craetes a file.
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 *
 * Return: if the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, l);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
