#include "main.h"

/**
 *function to concatenate Two strings
* the second arguments is ruled by the number
* of bytes i pass 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while(j<n&&src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
