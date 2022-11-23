#include "main.h"

/**
 * append_text_to_file - check the code
 *@filename: nom du fichier
 *@text_content: the content
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}
	write(fp, text_content, strlen(text_content));

	close(fp);
	return (1);
}

