#include "main.h"
char **strtow(char *str)
{
    char **ptr;
    int count1 = 0;
    int count = 0;
    int wordscount = 0;
    int flag = 0;
    int i = 0;
    int x = 0;
    int j;

    while (str && str[count1] != '\0')
    {
        count1++;
        if (str[count1] == '\0' || str[count1] == ' ')
        {
            flag = 0;
        }
        else if (flag == 0)
		{
			flag = 1;
			wordscount++;
		}
    }
    
    ptr = (char **) malloc((wordscount + 1) * sizeof(char *));

    if (wordscount == 0 || str == NULL || ptr == NULL)
        return NULL;
    

    while (i <= count1)
    {
        if ((str[i] == '\t' || str[i] == '\0' || str[i] == ' ') && count > 0)
        {
            ptr[x] = (char *) malloc((count + 1) * sizeof(char *));
            for (j = 0; j < count; j++)
            {
                ptr[x][j] = str[i - count + j];
            }
            ptr[x][j] = '\0';
            x++;
            count = 0;
        }
        else if ((str[i] != '\t' && str[i] != ' ') || str[i] == '\0')
        {
            count++;            
        }
        i++;
    }
    ptr[x] = NULL;

    return ptr;
}