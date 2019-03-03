/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** event.c
*/

#include "my.h"

void	event_gestion(int c, char **map2d, char *map)
{
	int y = get_pos_y_P(map2d, map);
	int x = get_pos_x_P(map2d, map);
	switch (c) {
	case KEY_RIGHT:
		move_right(map2d, x, y);
		break;
	case KEY_DOWN:
		move_down(map2d, x, y);
		break;
	case KEY_UP:
		move_up(map2d, x, y);
		break;
	case KEY_LEFT:
		move_left(map2d, x, y);
		break;
	case 32:
		transform_char1d_to_char2d(map, map2d);
		break;
	}
}