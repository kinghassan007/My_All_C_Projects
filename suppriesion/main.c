#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,n,t[20],g,j;
printf("donner n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("donner lentier");
scanf("%d",&t[i]);
}
printf("lindice");
scanf("%d",&g);
for(i=g;i<n;i++)
{
    t[i]=t[i+1];
}
n=n-1;
for(i=0;i<n;i++)
    printf("%d",t[i]);
    return 0;
}
