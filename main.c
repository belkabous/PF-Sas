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


void add_tache() {
        
   if(nb_taches>=101){
        printf("la liste est pleine");
        return;
    }
    Tache nouvelle_tache;
    printf("entrer le titre de tache:\n");
    scanf(" %[^\n]",nouvelle_tache.titre);
    printf("entrer la description:\n");
    scanf(" %[^\n]", nouvelle_tache.description);
    printf("entrer la date:\n");
    scanf(" %[^\n]", nouvelle_tache.date);
    printf("entrer la priorité(low / high):\n");
    scanf(" %[^\n]", nouvelle_tache.priorite);
    taches[nb_taches] = nouvelle_tache;
    nb_taches++;
        printf("Tâche ajoutée avec succès!\n");
    }
    
void afficher_tache() {
    if (nb_taches == 0) {
        printf("Aucune tâche à afficher.\n");
        return;
    }
    printf("\nListe des Tâches:\n");
    for (int i = 0; i < nb_taches; i++) {
        printf("Tâche %d:\n", i + 1);
        printf("Titre: %s\n", taches[i].titre);
        printf("Description: %s\n", taches[i].description);
        printf("Date d'échéance: %s\n", taches[i].date);
        printf("Priorité: %s\n\n", taches[i].priorite);
    }
}
 
void modifier_tache(){
        int index;
        afficher_tache();
        if (nb_taches == 0){
            printf("rien de tache à modifier.\n ");
            return;
        }
        printf("ecrire le num de la tache à modifier:");
        scanf("%d", &index);
        index--;
        
        if(index < 0 || index >= nb_taches){
            printf("numero de tache invalide \n");
            return;
        }
        printf("modifier la tache %d \n", index + 1);
        printf("nouveau titre ");
        char nouveau_titre[101];
        scanf(" %[^\n]", nouveau_titre);
        if (strlen(nouveau_titre) > 0){
            strcpy(taches[index].titre, nouveau_titre);
        }
        printf("nouvelle description ");
        char nouvelle_description[1000];
        scanf(" %[^\n]", nouvelle_description);
        if(strlen(nouvelle_description) > 0){
            strcpy(taches[index].description, nouvelle_description);
        }
         printf("nouvelle date: ");
        char nouvelle_date[12];
        scanf(" %[^\n]", nouvelle_date);
        if(strlen(nouvelle_date) > 0){
            strcpy(taches[index].date, nouvelle_date);
        }
         printf("nouvelle Priorité:");
        char nouvelle_priorite[11];
        scanf(" %[^\n]", nouvelle_priorite);
        if(strlen(nouvelle_priorite) > 0){
            strcpy(taches[index].priorite, nouvelle_priorite);
        }
            printf("Tâche modifiée avec succès!\n");
}


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

  switch (choix) {
            case 1:
                add_tache();
                break;
            case 2:
                afficher_tache();
                break;
            case 3:
                modifier_tache();
                break;
            case 4:
                
            break;
            case 5:
                
            break;
    default:
    printf("choix invalide. veuillez reessayer. \n");
}
    
   
    
}while(choix!=6);

return 0;

}
