#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);  // Open the file descriptor

    if (fd == -1) {
        printf("Error opening the file.\n");
        return 1;
    }

    int number = 42;
    float pi = 3.14159;
    char message[] = "Hello, world!";

    dprintf(fd, "Number: %d\n", number);
    dprintf(fd, "Pi: %.2f\n", pi);
    dprintf(fd, "Message: %s\n", message);

    close(fd);  // Close the file descriptor

    return 0;
}