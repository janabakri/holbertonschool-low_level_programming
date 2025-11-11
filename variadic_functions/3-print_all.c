#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	char *sep = "";
	const char t[] = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (t[j])
		{
			if (format[i] == t[j] && j < 4)
			{
				printf("%s", sep);
				if (format[i] == 'c')
					printf("%c", va_arg(args, int));
				if (format[i] == 'i')
					printf("%d", va_arg(args, int));
				if (format[i] == 'f')
					printf("%f", va_arg(args, double));
				if (format[i] == 's')
				{
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
				}
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
