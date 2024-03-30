#include <stdio.h>
#include "main.h"

/**
 * function - print elements of an array
 * 
 * elements number specified by the user
 */
void print_array(int *a, int n)
{
	int i;

	for(i = 0; i <= n; i++)
	{
		if (i < n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
