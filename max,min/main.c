#include <stdio.h>
#include <stdlib.h>

int main()
{
int t[10],i,min,max,indice,indice2;
for(i=0;i<10;i++)
{
printf(" donner l entier");
scanf("%d",&t[i]);
}
min=t[0];indice=0;
max=t[0];indice2=0;
for(i=1;i<10;i++)
{
    if(t[i]<min)
    {
        min=t[i];
        indice=i;
    }
    if(t[i]>max)
    {
        max=t[i];
        indice2=i;
    }
}
printf("%d\n%d\n",max,indice2);
printf("%d\n%d\n",min,indice);
    return 0;
}

