#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
void free_grid(int **grid, int height);
char *_strdup(char *str);
#endif
