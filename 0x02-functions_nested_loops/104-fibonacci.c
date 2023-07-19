#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main() {
    int a = 1, b = 2, c, i;
    
    printf("%d, %d, ", a, b);
    for (i = 2; i < 98; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d, ", c);
    }
    printf("\n");
    return (0);
}
