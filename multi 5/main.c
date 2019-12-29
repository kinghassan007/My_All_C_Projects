#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,g=1;
    printf("donner le valeur");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
     g=i*x;
     printf("%d\t",i);

    }
    printf("\n");
    for(i=1;i<=10;i++)
    {

    printf("-------");

    }
    printf("\n");
    for(i=1;i<=10;i++)
    {
     g=i*x;

     printf("%d\t",g);
    }
    return 0;
}
