#include <stdio.h>
#include "main.h"
/**
* print_array - does some thing
* @a: ptr1
* @n: size
* Return: len
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n-1)
			printf(", ");
	}
	printf("\n");
}
