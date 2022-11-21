#include "main.h"

/**
 * read_textfile - check the code
 *@filename: nom du fichier
 *@letters: the size 
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr = NULL; 
	char ch; 
	size_t i = 0 ;

	ptr = fopen(filename,"r"); 
	if(ptr == NULL)
	{
		return (0); 
	}

	while(ch != EOF)
	{
		ch = fgetc(ptr);
		printf("%c",ch);
		i++; 
		if(i == letters-1)
		break;

	}

	

	fclose(ptr) ;
	return(i);
}
