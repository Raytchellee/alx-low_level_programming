#include "main.h"

/**
 * read_textfile - reads text file and prints letters
 * @filename: filename
 * @letters: count of letters printed
 * Return: letters or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_info;
	char *s;
	ssize_t file_read, file_write;

	if (!filename)
		return (0);

	file_info = open(filename, O_RDONLY);
	if (file_info == -1)
		return (0);

	s = malloc(sizeof(char) * (letters));
	if (!s)
		return (0);
	file_read = read(file_info, s, letters);
	file_write = write(STDOUT_FILENO, s, file_read);

	close(file_info);
	free(s);
	return (file_write);
}

