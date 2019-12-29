#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int x,y,z;
char shams[200],doc[202];
printf("entre le nom");
scanf("%s",shams);
x=strlen(shams);
printf("%d",x);
printf("entre le nom");
scanf("%s",doc);
y=strcmp(shams,doc);
if (strcmp(shams,doc)==0)
    printf("ch1 et ch2 sont egaux %d",y);
else
    printf("ch1 et ch2 n sont pas egaux %d",y);
strcat(shams,doc);
printf("\n%s",shams);
strncpy(doc,shams,3);
printf("\n\n\n%s",doc);
    return 0;
}
