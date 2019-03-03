/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** window.c
*/

#include "my.h"

void	create_window(void)
{
	newterm(NULL, stderr, stdin);
	noecho();
	keypad(stdscr, true);
	curs_set(0);
	refresh();
}
