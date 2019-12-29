#include <stdio.h>
#include <stdlib.h>

int main()
{
float x;
printf("donner le moyene ");
scanf("%f",&x);
if (x>=16)
{
    printf("tres bien");
}
else if ((14<= x)&&(x< 16))
{
     printf(" bien");
}
else if  ((12 <= x)&&(x< 14))
    {
       printf(" assez bien");
    }
else if  ((10 <= x)&&(x< 12))
    {
       printf(" passable");
    }
else if  ((0 <= x)&&(x< 10))
    {
       printf(" mission failed bitch ");
    }
    return 0;
}
