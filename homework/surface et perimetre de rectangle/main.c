#include <stdio.h>
#include <stdlib.h>

int main()
{
float lar,lon,laire,perimetre;
printf("donne le largeur");
scanf("%f",&lar);
printf("donne la longeur");
scanf("%f",&lon);

 if ((lar>0)&&(lon>0))
{
laire=lon*lar;
perimetre=(lon+lar)*2;
printf(" laire est %f\n perimetre est %f",laire,perimetre);
}
 else
 {
   printf("reecrire la longeur et le largeur");
 }
    return 0;
}
