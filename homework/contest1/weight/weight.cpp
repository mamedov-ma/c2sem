#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int w = 0;
    unsigned int n2,n1,i = 0;
    unsigned int n = 0;
    int a[100] = {0};

    scanf("%d", &w);

    printf("1\n");

    while(w >= 1)
    {
        switch (w % 3)
        {
            case 0: w /= 3;
                    break;

            case 1:
                a[n] = 1;
                w = (w - 1) / 3;
                break;

            case 2:
                a[n] = -1;
                w = (w + 1) / 3;
                break;
        }

        n++;
    }

    //for(i = 0; i < n; i++)
      //  printf("%d ", a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            printf("%.0f ", pow(3, i));
          //  n1++;
        }
    }

    //if(n1 == 0)
    //    printf("%d", n1);

    printf("\n");

    for(i = 0; i < n; i++)
    {
        if(a[i] == -1)
        {
            printf("%.0f ", pow(3, i));
           // n2++;
        }
    }


  //  if(n2 == 0)
  //      printf("%d", n2);

 }

