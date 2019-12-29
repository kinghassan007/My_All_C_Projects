#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,t[200],i;
float s=0,p=1,M;
do
{
    printf("donner le num");
    scanf("%d",&n);
}
while(!(n>=0));
for (i=0;i<n;i++)
{
    printf(" donner l entier");
    scanf("%d",&t[i]);
}
for(i=0;i<n;i++)
{
    s=s+t[i];
}
printf("%2.f",s);

for(i=0;i<n;i++)
{
    p=p*t[i];
}
printf("\n\n%2.f",p);
M=s/n;
printf("\n\n%2.f",M);
    return 0;
}
