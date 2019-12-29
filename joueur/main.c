#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i ;

typedef struct joueur
{
    int numero_poste;
    char role[20];
    float poids;
    float taille;
    char Nom [20],Prenom [20];

}
joueur;
joueur equipe[8];
for (i=0;i<3;i++)
{
    printf("donner le num de poste");
    scanf("%d",&equipe[i].numero_poste);
    printf("donner le poid");
    scanf("%f",&equipe[i].poids);
    printf("donner le taille");
    scanf("%f",&equipe[i].taille);
    printf("donner le nom");
    scanf("%s",equipe[i].Nom);
    printf("donner le prenom");
    scanf("%s",equipe[i].Prenom);
    if(equipe[i].numero_poste==1)
    {
        strcpy(equipe[i].role,"poste1");
    }
    if(equipe[i].numero_poste==1)
    {
        strcpy(equipe[i].role,"poste1");
    }
    else if(equipe[i].numero_poste==2)
    {
        strcpy(equipe[i].role,"poste2");
    }
    else if(equipe[i].numero_poste==3)
    {
        strcpy(equipe[i].role,"poste3");
    }
    else if(equipe[i].numero_poste==4)
    {
        strcpy(equipe[i].role,"poste4");
    }
    else if(equipe[i].numero_poste==5)
    {
        strcpy(equipe[i].role,"poste5");
    }
    else if(equipe[i].numero_poste==6)
    {
        strcpy(equipe[i].role,"poste6");
    }
    else if(equipe[i].numero_poste==7)
    {
        strcpy(equipe[i].role,"poste7");
    }
    else if (equipe[i].numero_poste==8)
    {
        strcpy(equipe[i].role,"poste8");
    }

}
for(i=0;i<3;i++)
{
printf("%d %f %f %s %s %s\n\n",equipe[i].numero_poste,equipe[i].poids,equipe[i].taille,equipe[i].Nom,equipe[i].Prenom,equipe[i].role);
}
joueur max=equipe[0] ;
for(i=0;i<3;i++)
{
    if (equipe[i].poids>max.poids)
    {
        max=equipe[i];
    }

}
printf("voici le  %d %f %f %s %s %s\n\n",max.numero_poste,max.poids,max.taille,max.Nom,max.Prenom,max.role);
    return 0;
}
