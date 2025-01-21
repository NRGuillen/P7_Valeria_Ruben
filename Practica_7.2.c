#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_NOMBRE 20
#define MAX_APELLIDO 30
#define MAX_ESTUDIANTES 20

typedef struct{
	char nombre[MAX_NOMBRE];
	char apellido[MAX_APELLIDO];
	int nota;
}Estudiante;

void pedirEstudiantes(Estudiante ** LISTA_E, int num_estudiantes){

	*LISTA_E = (Estudiante*) malloc(num_estudiantes * sizeof(Estudiante));
	    if (*LISTA_E == NULL) {
	        printf("Error al asignar memoria.\n");
	        return;
	    }

	for (int i = 0; i < num_estudiantes; i++){
		printf("Introduzca los datos del estudiante %d de %d: \n"
			   "\t NOMBRE:", i+1, num_estudiantes);
		scanf(" %[^\n]", (*LISTA_E)[i].nombre);

		printf("\t APELLIDO:");
		scanf(" %[^\n]", (*LISTA_E)[i].apellido);

		printf("\t NOTA:");
	 	scanf("%d", &(*LISTA_E)[i].nota);
	}

	printf("\n\033[34mLISTA DE ALUMNOS:\033[0m\n");
	    for (int i = 0; i < num_estudiantes; i++) {
	        printf("\033[35mEstudiante %d:\33[0m\n", i + 1);
	        	printf("\tNombre: %s.\n", (*LISTA_E)[i].nombre);
	        	printf("\tApellido: %s.\n", (*LISTA_E)[i].apellido);
	        	printf("\tNota: %d.\n", (*LISTA_E)[i].nota);
	    }

}

int compareNota(const void* a, const void* b){
    	const Estudiante* da = (const Estudiante*)a;
    	const Estudiante* db = (const Estudiante*)b;
    	return da->nota - db->nota;
}

//Actualmente está todo almacenado en LISTA_E. Primero tenemos que acceder a LISTA_E->notas y organizar las notas. Luego vamos a LISTA_E->Apellido y lo organizamos alfabeticamente.

int main(){

	Estudiante * LISTA_E = NULL;
	int num_estudiantes;
	printf("Introduzca en número de estudiantes: ");
	scanf("%d", &num_estudiantes);

//UNO --> Función de pedir y mostrar estudiantes.
 	pedirEstudiantes(&LISTA_E, num_estudiantes);

//DOS --> Función ordenar por nota
	qsort(LISTA_E, num_estudiantes, sizeof(Estudiante), compareNota);

	for (int i = 0; i < num_estudiantes; ++i) {
     	printf("%d.\n", LISTA_E[i].nota);}

//TRES --> 	Función ordenar por apellido (alfabético)
	

free(LISTA_E);
return 0;	
}