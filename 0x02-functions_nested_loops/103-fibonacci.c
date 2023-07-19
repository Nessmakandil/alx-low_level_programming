#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main() {
    int a = 1, b = 2, c, sum = 2;  
    /**
     * start with b, which is even
     */

    while (b <= 4000000) {
        c = a + b;
        a = b;
        b = c;
        if (b % 2 == 0) {
            sum += b;
        }
    }
    printf("%d\n", sum);
    return (0);
}
