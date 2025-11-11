#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: (void)
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *s, *sep = "";
	char t[] = "cifs";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (t[j])
		{
			if (format[i] == t[j])
			{
				printf("%s", sep);
				if (t[j] == 'c')
					printf("%c", va_arg(ap, int));
				if (t[j] == 'i')
					printf("%d", va_arg(ap, int));
				if (t[j] == 'f')
					printf("%f", va_arg(ap, double));
				if (t[j] == 's')
				{
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s", s);
				}
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
