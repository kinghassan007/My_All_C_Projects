#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,p,v,n,t;
printf("donner le valeur de n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf(" donner le entier");
    scanf("%d",&t[i]);
}
printf("donner la position");
scanf("d",&p);
printf("donner le valeur");
scanf("d",&v);
for (i=p+1;i<n;i++)
{
    t[i]=t[i-1];
}
t[p]=v;
n++
return 0;
}
