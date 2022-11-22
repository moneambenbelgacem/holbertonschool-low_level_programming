#include "main.h"

/**
 * read_textfile - check the code
 *@filename: nom du fichier
 *@letters: the size
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buf;
	int b;
	

	buf = malloc(sizeof(char *) * letters);
	if (buf == NULL)
		return (0);
	fp = open(filename, O_RDONLY, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	b = read(fp, buf, letters);
	if (b == -1)
	{
		return (-1);
	}

	write(STDOUT_FILENO,buf,b);
	free(buf);
	close(fp);

	return (b);
}
