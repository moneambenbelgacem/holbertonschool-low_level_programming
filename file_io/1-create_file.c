#include "main.h"

/**
 * create_file - check the code
 *@filename: nom du fichier
 *@text_content: the content
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	fp = open(filename, O_CREAT | O_WRONLY| O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (filename == NULL)
		return (-1);

	write(fp, text_content, strlen(text_content));

	close(fp);
	return (1);
}