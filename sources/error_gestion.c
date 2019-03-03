/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban.c
*/

#include "my.h"

void	invalid_map(char *path)
{
	char *map = get_file(path);
	int len_map = my_strlen(map);
	for (int i = 0; i < len_map; i++) {
		if (map[i] != 'X' && map[i] != 'O' && map[i] != '#'
		&& map[i] != ' ' && map[i] != 'P' && map[i] != '\n')
			exit(84);
	}
}

void 	error_gestion(int ac, char **av)
{
	if (ac != 2)
		exit (84);
	if (av[1][0] == '-' && av[1][1] == 'h')
		usage();
	invalid_map(av[1]);
}