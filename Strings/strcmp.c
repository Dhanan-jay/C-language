// String Compare

#include <stdio.h>
#include <string.h>
int main()
{
    char firstStr[] = "Apple";
    char secStr[] = "Banana";

    printf("%d\n", strcmp(firstStr, secStr));
    // -1 Because ASCII value of A = 65 & B = 66  so, 65-66 = -1

    printf("%d\n", strcmp(secStr, firstStr));
    //  1 Because ASCII value of B = 66 & A = 65  so, 66-65 = 1

    // char firstStr[] = "HHH";
    // char secStr[] = "HHH";

    // printf("%d", strcmp(firstStr, secStr));
    //  0 Beacuse ASCII value of H = 72 & H = 72 so, 72-72 = 0

    return 0;
}