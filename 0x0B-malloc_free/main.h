#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - Prints a character
 * @c: a character in the _putchar function
 * File: main.h
 * Auth: Austin Godwin
 * Desc: Header file containing prototypes for all functions
 * used in the 0x06-pointers_arrays_strings.
 *
 * Return: No return values here, they are just a function prototype.
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
