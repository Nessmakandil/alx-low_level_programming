#include "main.h"
char **strtow(char *str)
{
    char **ptr;
    char *tmp;
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
    
    ptr = malloc((wordscount) * sizeof(char *));
    if (ptr == NULL)
        return NULL;
    
    i = 0;

    while (str && str[i] != '\0')
    {
        if ((str[i] == '\t' || str[i] == '\0' || str[i] == ' ') && count > 0)
        {
            tmp = malloc(count + 1);
            for (j = 0; j < count; j++)
            {
                tmp[j] = str[i - count + j];
            }
            tmp[j] = '\0';
            ptr[x] = tmp;
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