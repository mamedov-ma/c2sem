#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    unsigned int a = 0;

    scanf("%x", &a);

    a >>= 4;

    unsigned int b = 3;

    switch(a & b)
    {
        case 0:
            printf("bn");
            break;
        case 1:
            printf("rd");
            break;
        case 2:
            printf("bw");
            break;
        case 3:
            printf("bk");
            break;
    }

    return 0;
}

