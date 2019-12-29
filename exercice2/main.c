#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int x,s=0;
printf("donner le valeur de x");
scanf("%d",&x);
s=((x/100)+((x%100)/10)+(x%10));
if(s%2==0)
{
    s=pow(s,2);
    printf("le carre egale%d",s);
}
else
{
    s=sqrt(s);
    printf("le racine est%d",s);
}
    return 0;
}
