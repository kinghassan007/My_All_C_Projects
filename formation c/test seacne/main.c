#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    printf("donner le num de mois");
    scanf("%d",&x);
    switch(x)
    {
    case 3:
    case 4:
    case 5:
    {
        printf("pritemps");
    }
    break;
    case 6:
    case 7:
    case 8:{printf("ete");}break;
    case 9:
    case 10:
    case 11:{printf("autann");}break;
    case 1:
    case 2:
    case 12:{printf("hiver");}break;
    default : {printf("erreur");}

    }

















    if (x==8)
    {
        printf(" ete");
    }
    else if (x==7)
    {
        printf("ete");
    }
    else if (x==6)
    {
        printf("ete");
    }
    if (x==5)
    {
        printf("autann");
    }
    else if (x==10)
    {
        printf("autann");
    }
    else if(x==11)
    {
        printf("autann");
    }
    if (x==12)
    {
        printf("hiver");
    }
    else if (x==1)
    {
        printf("hiver");
    }
    else if(x==2)
    {
        printf("hiver");
    }
    if (x==3)
    {
        printf("printemps");
    }
    else if (x==4)
    {
        printf("printemps");
    }
    else if(x==5)
    {
        printf("printemps");
    }

    return 0;
}
