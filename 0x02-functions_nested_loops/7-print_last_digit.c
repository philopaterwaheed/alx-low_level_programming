#include "main.h"
/**
* print_last_digit - does some thing
* @n: used to check if lower
* Return: 1 if @n is a lowercase
* else return 0
*/
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
