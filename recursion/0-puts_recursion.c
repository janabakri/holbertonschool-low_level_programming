#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* base case: if we reach the end of the string */
    {
        _putchar('\n');  /* print newline at the end */
        return;          /* stop recursion */
    }

    _putchar(*s);         /* print current character */
    _puts_recursion(s + 1); /* recursive call for the next character */
}
