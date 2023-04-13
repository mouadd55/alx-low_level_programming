#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

char	*_strdup(char *str);
char	*str_concat(char *s1, char *s2);
void	free_grid(int **grid, int height);
int		**alloc_grid(int width, int height);
char	*create_array(unsigned int size, char c);

#endif