#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    
    FILE *fd_from = fopen(argv[1], "r");
    FILE *fd_to = fopen(argv[2], "r+");
    char buffer[BUFFER_SIZE];
    size_t bytes_read, bytes_written;

    if (argc != 3) {
        printf("Usage: cp file_from file_to\n");
        exit(97);
    }
    if (fd_from == NULL) {
        printf("Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }    
    if (fd_to == NULL) {
        printf("Error: Can't write to file %s\n", argv[2]);
        exit(99);
    }
    while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, fd_from)) > 0) {
        bytes_written = fwrite(buffer, 1, bytes_read, fd_to);

        if (bytes_written != bytes_read) {
            printf("Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }
    if (ferror(fd_from)) {
        printf("Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (fclose(fd_from) != 0) {
        printf("Error: Can't close file %s\n", argv[1]);
        exit(100);
    }
    if (fclose(fd_to) != 0) {
        printf("Error: Can't close file %s\n", argv[2]);
        exit(100);
    }
    return 0;
}