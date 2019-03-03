/*
** EPITECH PROJECT, 2017
** lib.c
** File description:
** lib.c
*/

#include "my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}

char	*my_strcat(char *s1, char *s2)
{
	int i = 0;
	int a = 0;
	char *new = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
	if (s1 != NULL) {
		while(s1[i] != '\0') {
			new[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL) {
		while (s2[a] != '\0') {
			new[i] = s2[a];
			i++;
			a++;
		}
	}
	return (new);
}

int	my_strlen(char *str)
{
	int i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0') {
		i++;
	}
	return (i);
}