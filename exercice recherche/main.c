#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,t[20],x,p=-1;
do
{
    printf("donner le num");
    scanf("%d",&n);
}
while(!((n>5)&&(n<10)));
for(i=0;i<n;i++)
{
    printf("donner lentier");
    scanf("%d",&t[i]);
}
printf("donner un entier a rechecher");
scanf("%d",&x);
for(i=0;i<n;i++)
{
    if(t[i]==x)
        p=i ;
}
    if(p==-1){
printf(" n'existe pas");
    }else{
printf("%d",p);
    }
    return 0;
}
