/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** navigate_in_map.c
*/

#include "my.h"

int	longest_line_finder(char *map)
{
	int size_line = 0;
	int size_tmp = 0;
	int i = 0;
	while (map[i] != '\0') {
		size_tmp = 0;
		while (map[i] != '\n' && map[i] != '\0') {
			size_tmp++;
			i++;
		}
		if (size_tmp > size_line)
			size_line = size_tmp;
		i++;
	}
	return (size_line);
}

int	get_nb_lines(char *map)
{
	int nb_lines = 0;
	int i = 0;
	while (map[i] != '\0') {
		if (map[i] == '\n')
			nb_lines++;
		i++;
	}
	return (nb_lines+1);
}

int	get_pos_y_P(char **map2d, char *map)
{
	int return_y = 0;
	for (int i = 0; i < get_nb_lines(map); i++) {
		for (int j = 0; j < longest_line_finder(map); j++)
			if (map2d[i][j] == 'P')
				return_y = i;
	}
	return (return_y);
}

int	get_pos_x_P(char **map2d, char *map)
{
	int return_x = 0;
	for (int i = 0; i < get_nb_lines(map); i++) {
		for (int j = 0; j < longest_line_finder(map); j++)
			if (map2d[i][j] == 'P')
				return_x = j;
	}
	return (return_x);
}