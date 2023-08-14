#include "main.h"
char **strtow(char *str)
{
    char **ptr;
    int count = 0;
    int wordscount = 0;
    int flag = 0;
    int i = 0;
    int x = 0;
    int j;

    while (str && str[i] != '\0')
    {
        i++;
        if (str[i] == '\t' || str[i] == ' ')
        {
            flag = 0;
        }
        else if (flag == 0)
		{
			flag = 1;
			wordscount++;
		}
    }
    
    ptr = malloc((wordscount + 1) * sizeof(char *));
    if (wordscount == 0 || str == NULL || ptr == NULL)
        return NULL;
    
    i = 0;

    while (str && str[i] != '\0')
    {
        if ((str[i] == '\t' || str[i] == '\0' || str[i] == ' ') && count > 0)
        {
            ptr[x] = malloc(count + 1);
            for (j = 0; j < count; j++)
            {
                ptr[x][j] = str[i - count + j];
            }
            ptr[x][j] = '\0';
            x++;
            count = 0;
        }
        else if (str[i] != '\t' && str[i] != '\0' && str[i] != ' ')
        {
            count++;            
        }
        i++;
    }

    return ptr;
}