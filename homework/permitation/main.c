#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
printf("donner le premier valeur");
scanf("%d",&a);
printf("donner le deuxime valeur");
scanf("%d",&b);
c=b;
b=0;
b=a;
a=c;
printf("a egale %d\nb egale %d",a,b);
return 0;
}
