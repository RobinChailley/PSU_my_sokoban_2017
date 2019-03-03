/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** main.c
*/

#include  "my.h"

int	main(int ac, char **av)
{
	error_gestion(ac, av);
	char *map = get_file(av[1]);
	position_O_t *pos_o = malloc(sizeof(position_O_t) * count_nb_O(map));
	char **map2d = malloc_2d_char(map2d, map);
	create_window();
	transform_char1d_to_char2d(map, map2d);
	create_all_pos_o(pos_o, map2d, map);
	sokoban(map2d, map, pos_o);
	endwin();
	free(map);
	free(map2d);
	return (0);
}