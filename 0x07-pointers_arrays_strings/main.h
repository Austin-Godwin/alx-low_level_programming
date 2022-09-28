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
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int_strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
