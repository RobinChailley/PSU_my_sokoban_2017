/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** usage.c
*/

#include "my.h"

void	usage(void)
{
	my_putstr("USAGE\n");
	my_putstr("\t\t./my_sokoban map\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("\t\tmap file representing the warehouse, containing '#'");
	my_putstr(" for walls, 'P' for the player, 'X' for boxes and 'O'");
	my_putstr(" for storage locations.\n");
}