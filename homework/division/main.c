#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c,res,b;
    printf("donner le dividende");
    scanf("%d",&a);
    printf("donner le diviseur");
    scanf("%d",&b);
    if (b>0)
    {
    c=a/b;
    res=a%b;
    printf("le quotient est %d\nle reste de division est%d",c,res);
    }
    else
    printf("choisi un autre diviseur");
    return 0;
}
