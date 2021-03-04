#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 1. хранить
// 2. печатать
// 3. складывать (правильно)
// 4. вычитать
// 5. умножать

// 27895647

int main()
{
    char s1[101];
    char s2[101];
    char res[101];
    char buf[1000];
    char *p1 = 0;
    char *p2 = 0;

    scanf("%s", s1);
    scanf("%s", s2);

    int i, p = 0, sum1 = 0, sum2 = 0;
    int len1, len2;
    int int1, int2;

    p1 = s1;
    p2 = s2;

    len1 = strlen(p1);
    len2 = strlen(p2);

    p1 = (len1 > 5) ? p1 + len1 - 5 : p1;
    p2 = (len2 > 5) ? p2 + len2 - 5 : p2;

    printf("%s %d\n%s %d\n", p1, len1, p2, len2);

    sscanf(p1, "%u", &int1);
    sscanf(p2, "%u", &int2);

    sum1 = (int1 + int2) % 100000;
    p = (int1 + int2) / 100000;

    printf("sum1: %d p: %d\n", sum1, p);

    p1[0] = '\0';
    p2[0] = '\0';

    sprintf(buf, "%d", sum1);


    //=============================================================================


    p1 = s1;
    p2 = s2;

    len1 = strlen(s1);
    len2 = strlen(s2);

    p1 = (len1 > 5) ? s1 + len1 - 5 : s1;
    p2 = (len2 > 5) ? s2 + len2 - 5 : s2;

    printf("%s %d\n%s %d\n", s1, len1, s2, len2);

    int1 = 0;
    int2 = 0;

    sscanf(p1, "%u", &int1);
    sscanf(p2, "%u", &int2);

    printf("int1: %d int2: %d\n", int1, int2);

    sum2 = (int1 + int2 + p) % 100000;
    p = (int1 + int2 + p) / 100000;

    printf("sum2: %d p: %d\n", sum2, p);

    if(sum2 > 0)
        sprintf(res, "%d", sum2);

    strcat(res, buf);

    printf("%s", res);

}
