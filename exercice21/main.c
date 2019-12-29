#include <stdio.h>
#include <stdlib.h>

int main()
{
 int f=1,n,i=1;
 printf("donner le valeur ");
 scanf("%d",&n);
 do
 {
     f=f*i;
     i++ ;
 }
 while(i<=n) ;
 printf("%d",f);
    return 0;
}
