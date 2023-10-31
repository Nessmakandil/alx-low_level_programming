#include "main.h"
int create_file(const char *filename, char *text_content)
{
    FILE *fp = fopen(filename, "rw");
    
    if (filename == NULL || fp == NULL)
    {
        return (-1);
    }
    fprintf(fp, "%s", text_content);
    if (fp == NULL)
    {
        return (-1);
    }
    fclose(fp);
    return (0);
}