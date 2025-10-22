#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char codes[] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = codes[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
