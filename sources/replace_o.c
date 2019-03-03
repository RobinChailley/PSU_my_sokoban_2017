/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** replace_o.c
*/

#include "my.h"

int	count_nb_O(char *map)
{
	int nb_O = 0;
	int i = 0;
	while (map[i] != '\0') {
		if (map[i] == 'O')
			nb_O++;
		i++;
	}
	return (nb_O);
}

position_O_t	create_pos_o(int x, int y)
{
	position_O_t pos_o;
	pos_o.x = x;
	pos_o.y = y;
	return (pos_o);
}

void	create_all_pos_o(position_O_t *pos_o, char **map2d, char *map)
{
	int a = 0;
	for (int i = 0; i < get_nb_lines(map); i++) {
		for (int j = 0; j < longest_line_finder(map); j++)
			if (map2d[i][j] == 'O') {
				pos_o[a] = create_pos_o(j, i);
				a++;
			}
	}
}

void	replace_o(position_O_t *pos_o, char **map2d, char *map)
{
	int nb_o = count_nb_O(map);
	for (int i = 0; i < nb_o; i++) {
		if (map2d[pos_o[i].y][pos_o[i].x] == ' ')
			map2d[pos_o[i].y][pos_o[i].x] = 'O';
	}
}