#include <stdio.h>
#include <stdlib.h>

int main()
{
int n ,t[20],i;
do
{
    printf("donner le num");
    scanf("%d",&n);
}
while(!((n>=0)&&(n<20)));
for(i=0;i<n;i++)
{
    printf("donner un entier");
    scanf("%d",&t[i]);
}
for(i=0;i<n;i++)
{
    if(t[i]%2==0)
        printf("%d",t[i]);
}













    return 0;
}
