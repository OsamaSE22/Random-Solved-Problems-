#include "main.h"

/*
 * update the value of a variable through ..
 * taking its address and dereference so ..
 * change its value
 */
void reset_to_98(int *n)
{
	*n = 98;
}
