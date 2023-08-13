#include "main.h"
#include <string.h>
char *argstostr(int ac, char **av)
{
    int i, x;
    unsigned int j;
    unsigned int sum = 0;
    char *ptr;

    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }

    for (i = 1; i < ac; i++)
    {
        sum = sum + strlen(av[i]) + 1;
    }

    ptr = malloc(sum + 1);
    x = 0;

    for (i = 1; i < ac; i++)
    {
        j = 0;
        while (j < strlen(av[i]))
        {
            ptr[x] = av[i][j];
            j++;
            x++;
        }
        ptr[x] = '\n';
        x++;
    }
    return (ptr);
}
