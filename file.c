#include "file.h"

Session session;
Car copy[NOMBRE_VOITURES];

/**
 * Fonction d'écriture de fichier
 */
void saveRanks(){
    FILE* file = fopen(session.fileName, "w");

    if(file != NULL){  
        printf("Sauvegarde dans le fichier\n");

    	for (int i = 0; i < session.nombreCar; i++) { 
    		fprintf(file, "%d\n", copy[i].idCar);
    	}  

        fclose(file);
    }

   
}


/**

 * 
 * @param numeroCar : tableau contenant tous les numéros des voitures
 * @param previousSess : nom du fichier de la session précédente
 */
void read_from_file(int numeroCar[], char previousSess[]){
    numeroCar[session.nombreCar]; 
    FILE* fileToRead = fopen(previousSess, "r");
    char chaine[5] = "";
    int i;

    if(fileToRead != NULL){
        if(!strcmp(session.fileName, "RaceGrid.txt")){ 
            rewind(fileToRead);
            i=session.nombreCar-1;

            while(fgets(chaine, 5, fileToRead)){
                numeroCar[i] = atoi(chaine);
                i--;
            }

            fclose(fileToRead);

        } else { 
            //permet de rammener le pointeur au debut du fichier
            rewind(fileToRead);

            while(fgets(chaine, 5, fileToRead) != NULL){
            
                numeroCar[i] = atoi(chaine);
                printf("%d\n", numeroCar[i]);
                i++;
            
                if(i == session.nombreCar){
                    break;
                }
            } 

            fclose(fileToRead);

        }
    }
}
