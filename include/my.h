/*
** EPITECH PROJECT, 2017
** SOKOBAN
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <fcntl.h>

typedef struct position_O_s
{
	int x;
	int y;
}	position_O_t;

void 	create_window(void);
char 	*get_file(char *path);
void 	my_putchar(char c);
void 	my_putstr(char *str);
char 	*my_strcat(char *s1, char *s2);
int 	my_strlen(char *str);
void 	move_right(char **map2d, int x, int y);
void 	move_left(char **map2d, int x, int y);
void 	move_up(char **map2d, int x, int y);
void 	move_down(char **map2d, int x, int y);
void 	transform_char1d_to_char2d(char *map, char **map2d);
char  	**malloc_2d_char(char **map2d, char *map);
void 	display_2dmap(char **map2d, char *map);
void 	fill_with_space(char **map2d, char *map);
void 	put_last_line(char *map, char **map2d, int i);
int	longest_line_finder(char *map);
int 	get_nb_lines(char *map);
int	get_pos_y_P(char **map2d, char *map);
int	get_pos_x_P(char **map2d, char *map);
void 	event_gestion(int c, char **map2d, char *map);
int	sokoban(char **map2d, char *map, position_O_t *pos_o);
position_O_t create_pos_o(int x, int y);
int 	count_nb_O(char *map);
void 	create_all_pos_o(position_O_t *pos_o, char **map2d, char *map);
void 	usage(void);
void 	error_gestion(int ac, char **av);
void 	invalid_map(char *path);
void 	replace_o(position_O_t *pos_o, char **map2d, char *map);
int 	win(char **map2d, position_O_t *pos_o, char *map);
int 	lose(char **map2d, position_O_t *pos_x, char *map);
int 	count_nb_x(char *map);
int 	is_movable(int x, int y, char **map2d);
position_O_t create_pos_x(int x, int y);
void 	create_all_pos_x(position_O_t *pos_x, char **map2d, char *map);

#endif /* MY_H_ */