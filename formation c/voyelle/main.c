#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ca;
    printf("donner le caractere");
    scanf("%c",&ca);
    switch(ca)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':{printf("voyelle");}break;
    default:{printf("consane");}
    }







    return 0;
}
