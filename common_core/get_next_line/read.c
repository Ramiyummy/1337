#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int count = 11;
int main(void)
{
	int	nr, fd;
	char 	*buffer;

	buffer = calloc(count, sizeof(char) + 1);
	fd = open("rami.txt", O_RDONLY);

	nr = read(fd, buffer, count);

	printf("%s", buffer);

}
