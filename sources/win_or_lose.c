/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** win_or_lose.c
*/

#include "my.h"

int	win(char **map2d, position_O_t *pos_o, char *map)
{
	int nb_x_on_o = 0;
	int nb_o = count_nb_O(map);
	for (int i = 0; i < nb_o; i++) {
		if (map2d[pos_o[i].y][pos_o[i].x] == 'X')
			nb_x_on_o++;
	}
	if (nb_x_on_o == nb_o)
		exit (0);
	return (0);
}

int	count_nb_x(char *map)
{
	int nb_X = 0;
	int i = 0;
	while (map[i] != '\0') {
		if (map[i] == 'X')
			nb_X++;
		i++;
	}
	return (nb_X);
}