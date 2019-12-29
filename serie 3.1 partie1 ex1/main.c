#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,s,carre,racine,g;
    printf("donner le valeur de x");
    scanf("%d",&x);
    s=((x/100)+((x%100)/10)+(x%10));
    g=s%2;
    if ((x<999)&&(x>100))
    {
    if (g==0)
    {
      carre=pow(s,2);
      printf("le carre egale %d",carre);
    }
    else
    {
     racine=sqrt(s);
     printf("le racine egale %d",racine);
    }
    }
    else
    {
        printf("false");
    }
    return 0;
}
