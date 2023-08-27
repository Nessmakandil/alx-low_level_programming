#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    unsigned char *ptr = (unsigned char *)main;
    int i = 0;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes <= 0) {
        printf("Error\n");
        return 2;
    }

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

    return 0;
}