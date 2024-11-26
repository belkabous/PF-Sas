#include <stdio.h>
#include <string.h>

typedef struct {
    char titre[101];
    char description[1000];
    char date[12];
    char priorite[11];//high or low
} Tache;

Tache taches[101];
int nb_taches = 0;


int main()
{
    
  int choix;
do{
     printf(" Menu de Gestion des Tâches\n ");
        printf("1. Ajouter une Tâche\n");
        printf("2. Afficher la Liste des Tâches\n");
        printf("3. Modifier une Tâche\n");
        printf("4. Supprimer une Tâche\n");
        printf("5. Filtrer les Tâches par Priorité\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

  
   
    
}while(choix!=6);

return 0;

}
