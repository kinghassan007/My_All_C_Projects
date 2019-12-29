#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dc1,dc2,ds,M ;
    printf("donner le valeur de control1");
    scanf("%f",&dc1);
    printf("donner le valeur de control2");
    scanf("%f",&dc2);
    printf("donner le valeur de ds");
    scanf("%f",&ds);
    M=((dc1+dc2)+(ds*2))/4;
    printf("moyene=%.2f",M);
    return 0;
}
