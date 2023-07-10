#include "main.h"
/**
 * _strlen - fun
 * @s: pa
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
 * append_text_to_file - fun
 * @filename: para
 * @text_content: para
 *
 * Return: 9
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (len)
		b = write(f, text_content, len);
	close(f);
	return (b == len ? 1 : -1);
}
