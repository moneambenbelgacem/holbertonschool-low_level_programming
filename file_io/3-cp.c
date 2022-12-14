#include "main.h"
/**
 * main - check the code .
 * @argc: Argumetns counter
 * @argv: Arguments array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src, dst, in, out, c1, c2;
	char buf[BUF_SIZE];

	if (argc != 3)
		{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
		}
	src = open(argv[1], O_RDONLY);
	if (argv[2] == NULL)
		dst = creat(argv[2], MODE);
	dst = creat(argv[2], MODE);
	if (dst < 0)
		exit(3);
	while (1)
	{
		in = read(src, buf, BUF_SIZE);
		if (in <= 0)
			break;
		out = write(dst, buf, in);
		if (out <= 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	c1 = close(src);
	if (c1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c1);
		exit(100);
	}
	c2 = close(dst);
	if (c2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c2);
		exit(100);
	}
	return (0);
}
