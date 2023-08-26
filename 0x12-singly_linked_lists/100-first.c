#include "lists.h"

/**
 * printStatement - print.
 * 
 * @printStatementInitialized: global.
 * 
 */

int printStatementInitialized = 0;

void __attribute__((constructor)) printStatement()
{
    if (!printStatementInitialized)
    {
        printf("You're beat! and yet, you must allow,\n");
        printf("I bore my house upon my back!\n");
        printStatementInitialized = 1;
    }
}
