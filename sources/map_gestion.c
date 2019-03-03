/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** map_gestion.c
*/

#include "my.h"

void	transform_char1d_to_char2d(char *map, char **map2d)
{
	int nb_lines = get_nb_lines(map);
	int i = 0;
	int z = 0;
	int a = 0;
	fill_with_space(map2d, map);

	while (z < nb_lines-1) {
		a = 0;
		while (map[i] != '\n') {
			map2d[z][a] = map[i];
			a++;
			i++;
		}
		i++;
		z++;
	}
	put_last_line(map, map2d, i);
}

char	**malloc_2d_char(char **map2d, char *map)
{
	map2d =  malloc(sizeof(char * ) * get_nb_lines(map) * 2);
	for (int i = 0; i < get_nb_lines(map); i++)
		map2d[i] = malloc(sizeof(char) * longest_line_finder(map) * 2 );
	return (map2d);
}

void	display_2dmap(char **map2d, char *map)
{
	for (int i = 0; i < get_nb_lines(map); i++) {
		for (int j = 0; j < longest_line_finder(map); j++)
			addch(map2d[i][j]);
		addch('\n');
	}
}

void	fill_with_space(char **map2d, char *map)
{
	for (int i = 0; i < get_nb_lines(map); i++) {
		for (int j = 0; j < longest_line_finder(map); j++)
			map2d[i][j] = ' ';
	}
}

void	put_last_line(char *map, char **map2d, int i)
{
	int j = 0;
	while (map[i] != '\0') {
		map2d[get_nb_lines(map)-1][j] = map[i];
		i++;
		j++;
	}
}