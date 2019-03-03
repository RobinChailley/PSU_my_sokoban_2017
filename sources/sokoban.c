/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban.c
*/

#include "my.h"

int	sokoban(char **map2d, char *map, position_O_t *pos_o)
{
	int c = 0;
	display_2dmap(map2d, map);
	refresh();
	while ("loop") {
		c = getch();
		event_gestion(c, map2d, map);
		replace_o(pos_o, map2d, map);
		clear();
		display_2dmap(map2d, map);
		refresh();
		win(map2d, pos_o, map);
	}
}