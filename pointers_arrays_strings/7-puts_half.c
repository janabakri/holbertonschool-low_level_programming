#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: input string
 */
void puts_half(char *str)
{
	int len = 0, start;

	if (str == NULL)
		return;

	/* حساب طول السلسلة */
	while (str[len] != '\0')
		len++;

	/* حساب نقطة بداية النصف الثاني حسب طول السلسلة */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* طباعة من بداية النصف الثاني حتى نهاية السلسلة */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
