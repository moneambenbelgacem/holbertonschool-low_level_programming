#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define MODE 0664
#define BUF_SIZE 10000
int main(int argc, char *argv[])
{
	int src, dst, in, out;
	char buf[BUF_SIZE];
	if (argc != 3)
		exit(1);
	src = open(argv[1], O_RDONLY);
	if (src < 0)
		exit(2);
	dst = creat(argv[2], MODE | O_TRUNC);
	if (dst < 0)
		exit(3);
	while (1)
	{
		in = read(src, buf, BUF_SIZE);
		if (in <= 0)
			break;
		out = write(dst, buf, in);
		if (out <= 0)
			break;
	}
	close(src);
	close(dst);
	return(1);
}