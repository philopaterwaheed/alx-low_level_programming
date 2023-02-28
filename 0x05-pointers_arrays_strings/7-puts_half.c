#include "main.h"
/**
 * puts_half - reverse string
 * @s: the reference to the string
 */
void puts_half(char *str)
{
	int len = 0, i, mid;
	char c = *s;

	while (c != '\0')
		c = *(str + ++len);

	if (len == 0)
		return;

	mid = len / 2;

	for (i = mid; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
