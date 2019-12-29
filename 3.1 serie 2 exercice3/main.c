#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf(" donner le valeur de x ");
    scanf("%d",&x);
    if (x%5==0)
    {
        if(x%6==0)
        {
            printf("x est divisible sur 5 et 6");
        }
        else
        {
            printf("x est divisible sur 5");
        }
    }
    else if (x%6==0)
    {
        if(x%5==0)
        {
            printf("x est divisible sur 6 et 5");
        }
        else
        {
            printf("x est divisible sur 6");
        }
    }
    else
    {
        printf("x n est pas divisible sur 6et5 ");
    }
    return 0;
}
