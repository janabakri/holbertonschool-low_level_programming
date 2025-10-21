#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: the input string
 */
void puts_half(char *str)
{
	int len = 0, start;

	/* حساب طول السلسلة */
	while (str[len] != '\0')
	{
		len++;
	}

	/* تحديد نقطة البداية للنصف الثاني */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	/* الطباعة من منتصف السلسلة للنهاية */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
