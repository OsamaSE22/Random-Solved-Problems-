#include "main.h"

char *cap_string(char *str)
{
        int i;

        for (i =0; str[i] != '\0'; i++)
        {
                if(str[i] == ' ' || str[i] == '\n' || str[i] == '.' || str[i] == '\t' || str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' )
                {
			if(str[i+1]> 'Z')
			{
                        	str[i +1] = str[i+1] - 32;
			}
                }
		if (str[i] == '\t')
		{
			str[i] = ' ';
		}
        }
        return str;
}
