#include <stdio.h>
#include "get_next_line_bonus.h"

int		get_next_line(int fd, char **line);

// int		main(int argc, char **argv)
int		main(void)
{
	int		x;
	int		fd;
	char	*line;

	fd = open("./hola.txt", O_RDONLY);
	// fd = open(argv[1], O_RDONLY);
	printf("\nValor de fd: %d\n\n", fd);
	printf("Valor del gnl: %d: ", get_next_line(fd, NULL));
	while ((x = get_next_line(fd, NULL)) == 1)
	{
		printf("\nGNL: %d, linea : %s", x, line);
		free(line);
	}
	close(fd);
	return (0);
}
