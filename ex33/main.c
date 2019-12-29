#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0,x,i;
    for (i=105; i<=179; i++)
    {
        x=i%2;
        if (x==0)
        {
            printf("%d est pair",i);
        k++;
        }
    if (k>=10)

        break;
    }
    return 0;
}
