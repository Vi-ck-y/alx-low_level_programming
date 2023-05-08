#include "main.h"

/**
 * append_text_to_file - Appends the text at the end of the created file.
 * @filename:this points to the name of the file.
 * @text_content: indicates the string to be added to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist - -1.
 *         If user does not have the required write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(o);

	return (1);
}
