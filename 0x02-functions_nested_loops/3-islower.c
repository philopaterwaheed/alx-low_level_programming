#include "main.h"
/**
* _islower - does some thing
* @c: used to check if lower
* Return: 1 if @c is a lowercase
* else return 0
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}
