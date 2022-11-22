#include "main.h"

/**
 * read_textfile - check the code
 *@filename: nom du fichier
 *@letters: the size
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp,b;
	char *buf;
	size_t i;
	
	fp = open(filename,O_RDONLY,0600);
	if(fp == -1)
	{
		return(-1);  
	}
	buf = malloc(sizeof(char*)*letters);
	b = read(fp,buf,letters);
	if(b== -1)
	{
		return(-1);  
	}
	

	for(i = 0 ; i <=letters ;i++)
	{
		printf("%c",buf[i]);
	}
	return (b);
}
