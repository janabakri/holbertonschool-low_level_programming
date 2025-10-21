#include "main.h"

/**
 * _atoi - convert string to integer handling multiple signs and overflow edge cases
 * @s: string to convert
 *
 * Return: converted integer or 0 if none found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] == '+')
			; /* just ignore '+' */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;

			/* Build number digit by digit considering the sign */
			if (sign == 1)
				result = result * 10 + (s[i] - '0');
			else
				result = result * 10 - (s[i] - '0');
		}
		else if (found_digit)
			break;

		i++;
	}

	return (result);
}
