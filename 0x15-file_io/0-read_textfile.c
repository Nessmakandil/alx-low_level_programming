#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        return (0);
    }
    else
    {
        return (letters);
    }
}