#include "main.h"

/**
 * function takes two parametar
 * it stops in two conditions:
 * first if it encounters null terminator
 * second if it encounters two difference characters
 */
int _strcmp(char *s1, char *s2)
{
	int i;
    int k;

    i=0;
    while(s1[i] == s2[i] && s1[i] !='\0'&&s2[i] != '\0')
    {
        i++;
    }
    if(s1[i]>s2[i])
    {
        k = s1[i] - s2[i];
    }
    else if(s2[i]>s1[i])
    {
        k = s1[i] - s2[i];
    }
    else
    {
        k=0;
    }
    return (k);
}
