#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
    FILE *fp = fopen(filename, "a");
    
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