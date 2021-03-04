#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    unsigned int a = 0;

    scanf("%x", &a);

    a >>= 2;

    unsigned int b = 1;

    if (a & b == 1)
        printf("ha");
    else
        printf("nh");

    return 0;
}

