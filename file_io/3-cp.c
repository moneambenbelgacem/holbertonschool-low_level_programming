#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define MODE 0664
#define BUF_SIZE 10000
int main(int argc, char *argv[])
{
	int src, dst, in, out,c1,c2;
	char buf[BUF_SIZE];
	if (argc != 3)
		exit(1);
	src = open(argv[1], O_RDONLY);
	if (src < 0)
		exit(2);

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
			
			exit(99);
		}
	}
	c1 =close(src);
	if(c1== -1)
	{
		printf("Error: Can't close fd FD_VALUE");
		exit(100);
	}
	close(dst);
	return (0);
}