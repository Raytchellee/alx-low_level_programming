#include "main.h"

/**
 * append_text_to_file - appends text at eof
 * @filename: filename
 * @text_content: file content
 * Return: 1 on success -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_info, count = 0, file_write;

	if (!filename)
		return (-1);

	file_info = open(filename, O_WRONLY | O_APPEND);
	if (file_info == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
			count++;

		file_write = write(file_info, text_content, count);
		if (file_write == -1)
			return (-1);
	}

	close(file_info);
	return (1);
}
