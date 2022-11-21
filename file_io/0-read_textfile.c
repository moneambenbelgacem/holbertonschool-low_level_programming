#include "main.h"

/**
 * read_textfile - check the code
 *@filename: nom du fichier
 *@letters: the size
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	char ch;
	size_t i = 1;
	

	ptr = fopen(filename, "r");
	if (ptr == NULL || letters == 0)
	{
		return (0);
	}

	
	while ((ch = fgetc(ptr)) != EOF){
		
		printf("%c",ch);
		i++;
		if(i == letters)
		break;
		
	}

	fclose(ptr);
	return (i);
}
