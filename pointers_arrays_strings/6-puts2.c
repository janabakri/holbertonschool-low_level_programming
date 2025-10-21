#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print from
 *
 * Description: prints characters starting from the first,
 *              then every second character after that,
 *              followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
