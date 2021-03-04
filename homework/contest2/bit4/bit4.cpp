#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    unsigned int a = 0;

    scanf("%x", &a);

    unsigned int b,c = 0;

    b = 1;

    c = 3;

    if (a & b == 1)
        printf("ma ");
    else
        printf("fe ");

    a >>= 1;

    if (a & b == 1)
        printf("cl ");
    else
        printf("du ");

    a >>= 1;

    if (a & b == 1)
        printf("ha ");
    else
        printf("nh ");

    a >>= 1;

    if (a & b == 1)
        printf("tr ");
    else
        printf("sk ");

    a >>= 1;

    switch(a & c)
    {
        case 0:
            printf("bn ");
            break;
        case 1:
            printf("rd ");
            break;
        case 2:
            printf("bw ");
            break;
        case 3:
            printf("bk ");
            break;
    }

    a >>= 2;

    switch(a & c)
    {
        case 0:
            printf("bu");
            break;
        case 1:
            printf("ge");
            break;
        case 2:
            printf("gy");
            break;
        case 3:
            printf("da");
            break;
    }

    return 0;
}

