#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>


int main(void)
{
	int file;
	char	*line;
	char t[1];

	t[0] = 0;
	file = open("data2.txt", O_RDONLY);
	line = get_next_line(file);
	printf("%s\n", t);
	free(line);
	line = get_next_line(file);
	printf("%s\n", line);
	free(line);
	return (0);
}
