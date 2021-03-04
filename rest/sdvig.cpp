#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void left(unsigned char a, int n, unsigned char m)
{
    m |= a;

    m <<= 8 - n;

    a >>= n;

    a |= m;

    printf ("%d", a);
}




int main()
{
    unsigned char a, m = 0;

    int n = 0;

    scanf ("%hhu %d", &a, &n);

    left(a,n,m);
}
