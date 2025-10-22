#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		      '"', '(', ')', '{', '}', '\0'};
	int j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
