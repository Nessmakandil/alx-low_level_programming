#include <stdio.h>
#include <stdlib.h>
/**
 * calculateMinCoins - calculate change.
 *
 * @cents: money.
 * 
 * Return: count;
 */
int calculateMinCoins(int cents)
{
    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;
    int i;

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }
    for (i = 0; i < numCoins; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            count++;
        }
    }
    return count;
}
/**
 * main - check.
 *
 * @argc: count of argv.
 * @argv: string.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
    int cents, minCoins;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    if (atoi(argv[1]) < 0)
    {
        printf("0\n");
    }
    else
    {
        cents = atoi(argv[1]);
        minCoins = calculateMinCoins(cents);
        printf("%d\n", minCoins);
    }
    return 0;
}