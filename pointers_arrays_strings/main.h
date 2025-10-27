#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function prototypes */

/* 1. memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2. strchr */
char *_strchr(char *s, char c);

/* 3. strspn */
unsigned int _strspn(char *s, char *accept);

/* 4. strpbrk */
char *_strpbrk(char *s, char *accept);

/* 5. strstr */
char *_strstr(char *haystack, char *needle);

/* 6. Chessboard */
void print_chessboard(char (*a)[8]);

/* 7. Sum of diagonals */
void print_diagsums(int *a, int size);

/* _putchar function used in print_chessboard */
int _putchar(char c);

#endif /* MAIN_H */
