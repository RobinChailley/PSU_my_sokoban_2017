/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** move.c
*/

#include "my.h"

void	move_right(char **map2d, int x, int y)
{
	if (map2d[y][x+1] == ' ' || map2d[y][x+1] == 'O') {
		map2d[y][x+1] = 'P';
		map2d[y][x] = ' ';
	}
	else if (map2d[y][x+1] == 'X' && (map2d[y][x+2] == ' ' || map2d[y][x+2] == 'O')) {
		map2d[y][x+2] = 'X';
		map2d[y][x] = ' ';
		map2d[y][x+1] = 'P';
	}
}

void	move_down(char **map2d,  int x, int y)
{
	if (map2d[y+1][x] == ' ' || map2d[y+1][x] == 'O') {
		map2d[y+1][x] = 'P';
		map2d[y][x] = ' ';
	}
	else if (map2d[y+1][x] == 'X' && (map2d[y+2][x] == ' ' || map2d[y+2][x] == 'O')) {
		map2d[y+1][x] = 'P';
		map2d[y][x] = ' ';
		map2d[y+2][x] = 'X';
	}
}

void	move_up(char **map2d,  int x, int y)
{
	if (map2d[y-1][x] == ' ' || map2d[y-1][x] == 'O') {
		map2d[y-1][x] = 'P';
		map2d[y][x] = ' ';
	}
	else if (map2d[y-1][x] == 'X' && (map2d[y-2][x] == ' ' || map2d[y-2][x] == 'O')) {
		map2d[y-1][x] = 'P';
		map2d[y][x] = ' ';
		map2d[y-2][x] = 'X';
	}
}

void	move_left(char **map2d,  int x, int y)
{
	if (map2d[y][x-1] == ' ' || map2d[y][x-1] == 'O') {
		map2d[y][x-1] = 'P';
		map2d[y][x] = ' ';
	}
	else if (map2d[y][x-1] == 'X' && (map2d[y][x-2] == ' ' || map2d[y][x-2] == 'O')) {
		map2d[y][x-2] = 'X';
		map2d[y][x] = ' ';
		map2d[y][x-1] = 'P';
	}
}