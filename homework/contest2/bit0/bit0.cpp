#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    unsigned int a, b =  0;

    scanf("%x %x", &a, &b);

    a = a ^ b;

    printf("%x", a);

    return  0;
}
