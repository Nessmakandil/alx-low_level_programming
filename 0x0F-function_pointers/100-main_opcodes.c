#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes) {
    unsigned char *ptr = (unsigned char *)print_opcodes;
    int i = 0;

    while (i < num_bytes)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%02x", ptr[i]);
		i++;
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes <= 0) {
        printf("Error\n");
        return 2;
    }

    print_opcodes(num_bytes);

    return 0;
}