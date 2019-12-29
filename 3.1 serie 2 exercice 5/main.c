#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
printf("donner a ");
scanf("%f",&a);
printf("donner b ");
scanf("%f",&b);
if ((a<0)||(b<0))
{
    printf("le signe est negative");
}
else
{
    printf("le signe est positive");
}
    return 0;
}
