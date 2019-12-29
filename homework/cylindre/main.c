#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const float pi=3.14;
    float s,h,v,r;
    char unite,cm;
    printf("donner le rayon");
    scanf("%f",&r);
    printf("donner le hauteur");
    scanf("%f",&h);
    printf("donner unite");
    fflush(stdin);// pour vider le cache du mémoire
    scanf("%c",&unite);
    if (unite=='c')
    {
    s=pi*pow(r,2);
    v=h*s;
    printf("le volume est %f",v);
    }
    else if(unite=='m')
    {
     h=h/0.01;
     r=r/0.01;
     s=pi*pow(r,2);
     v=h*s;
     printf("le volume est %f",v);
    }
    else
    printf("rewrite the numbers that you have inserted ");
    return 0;
}
