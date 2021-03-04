#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    unsigned int n = 0;

    char str[50], buf[50];

    char * p, *q;

    fgets(str, sizeof str, stdin);

    //scanf("%50[^\n]", str);

    //p = str + strlen(str) - 4;

    if (str[strlen(str) - 2] == ' ')
        p = str + strlen(str) - 4;
    else
        p = str + strlen(str) - 3;

    q = buf;

    while(p >= str)
    {
        //printf("%s ", p);

        int a = strlen(str);

        strcpy(q, p);

        printf("%s\n", buf);

        switch(buf[0])
        {
            case 'm':
                n = n | 1;
                break;

            case 'c':
                n = n | 2;
                break;

            case 'h':
                n = n | 4;
                break;

            case 't':
                n = n | 8;
                break;

            case 'r':
                n = n | 16;
                break;
        }

        if(buf[0] == 'b' && buf[1] == 'w')
            n = n | 32;

        if(buf[0] == 'b' && buf[1] == 'k')
            n = n | 48;

        if(buf[0] == 'g' && buf[1] == 'e')
            n = n | 64;

        if(buf[0] == 'g' && buf[1] == 'y')
            n = n | 128;

        if(buf[0] == 'd' && buf[1] == 'a')
            n = n | 192;



        for(int i = 0; i <= 3; i++)
            str[a - i] = 0;

        buf[0], buf[1], buf[2], buf[4] = 0;

        p -= 3;
    }

    printf("%x", n);

    return 0;
}
