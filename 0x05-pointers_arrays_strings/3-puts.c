#include "main.h"
/**
* _puts - does some thing
* @s: ptr1
* Return: len
*/
void _puts(char *s)
{
	int i = 0;
	char c = *s;

	while (1)
	{
		c = *(s + i++);
		if (c == '\0')
			break;
		_putchar(c);
	}
	_putchar('\n');
}
