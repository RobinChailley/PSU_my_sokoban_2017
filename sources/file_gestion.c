/*
** EPITECH PROJECT, 2017
** file_gestion.c
** File description:
** file_gestion.c
*/

#define SIZE_BLOCK 4096
#include <sys/stat.h>
#include "my.h"

char	*get_file(char *path)
{
	int fd;
	int ret;
	char *buffer = NULL;
	char *file = NULL;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		exit(84);
	buffer = malloc(sizeof(char) * SIZE_BLOCK + 1);
	while ((ret = read(fd, buffer, SIZE_BLOCK)) != 0) {
		if (ret == -1)
			exit(84);
		buffer[ret] = '\0';
		file = my_strcat(file, buffer);
	}
	free(buffer);
	return (file);
}