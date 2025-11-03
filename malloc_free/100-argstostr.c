#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector (array of strings)
 *
 * Return: pointer to a new string containing all args, separated by '\n',
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length needed */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* for newline */
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	/* Copy arguments into new string with newline */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
