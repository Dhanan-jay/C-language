#include <stdio.h>
int main()
{
    char *canChange = "Hello World"; // ptr string can be Reinitialized.
    puts(canChange);

    canChange = "Bye World"; // <--
    puts(canChange);

    char cannotChange[] = "Hello World"; // Array string cannot be  Reinitialized.
    puts(cannotChange);

    // cannotChange = "Bye World";
    // puts(cannotChange);

    return 0;
}