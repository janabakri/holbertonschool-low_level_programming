#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * errors - Prints "Error" and exits with status 98
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The array of argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, n1, n2, *result, start = 0;

	if (argc != 3)
		errors();

	s1 = argv[1];
	s2 = argv[2];

	if (!_isdigit(s1) || !_isdigit(s2))
		errors();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	result = malloc(sizeof(int) * len);
	if (result == NULL)
		errors();

	for (i = 0; i < len; i++)
		result[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		n1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			n2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (n1 * n2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			start = 1;
		if (start)
			_putchar(result[i] + '0');
	}

	if (!start)
		_putchar('0');
	_putchar('\n');

	free(result);
	return (0);
}
