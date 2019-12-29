#include <stdio.h>
#include <stdlib.h>

int main()
{
float x;
int n,c;
printf("donner le valeur de x");
scanf("%f",&x);
printf("donner la puissance");
scanf("%d",&n);
c=pow(x,n);
printf("le resultat egale %d",c);
return 0;
}
