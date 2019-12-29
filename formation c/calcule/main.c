#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,res,r;
    char op;
    printf("donner x1");
    scanf("%d",&x1);
    printf("donner x2");
    scanf("%d",&x2);
    printf("donner op");
    fflush(stdin);// pour vider le cache du mémoire
    scanf("%c",&op);
    if(op=='*')
        res=x1*x2;
    else if(op=='/')
    {
        res=x1/x2;
        r=x1%x2;
        }
    else if(op=='+')
        res=x1+x2;
        if (op=='/')
    printf("le resulat %d le reste egale%d",res,r);
else
printf("le resulat %d ",res);
    return 0;
}
