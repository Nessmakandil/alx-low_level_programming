#ifndef MAIN_H
#define MAIN_H

#define _POSIX_C_SOURCE  200809L
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif