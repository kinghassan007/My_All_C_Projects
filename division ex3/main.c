#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n;
    printf("donner le valeur ");
    scanf("%d",&n);
    x=n%5;
    y=n%6;
    if(x==0)
    {
        if(y==0)
            printf("n est divisee sur 5 et 6 %d",n);
        else
            printf("n est divisee sur 5 %d",n);
    }
    else

    {
        if(x==0)
            printf("n est divisee sur 5 et 6 %d",n);
        else
            printf("n est divisee sur 6 %d",n);
    }
     else
     printf("errueur");


    return 0;
}
