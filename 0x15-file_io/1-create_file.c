#include "main.h"
/**
 * _strlen - fun
 * @s: para
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * create_file - fun
 * @filename: para
 * @text_content: para
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (len)
		bytes = write(f, text_content, len);
	close(f);
	return (bytes == len ? 1 : -1);
}

