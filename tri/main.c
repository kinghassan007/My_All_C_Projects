#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,j,t[80],aux;
printf("donner le num");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("donner lentier");
    scanf("%d",&t[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if (t[i]<t[j])
        {
            aux=t[i];
            t[i]=t[j];
            t[j]=aux;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d",t[i]);
}














    return 0;
}
