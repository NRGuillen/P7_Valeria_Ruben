#include <stdio.h>
#include <stdlib.h>

void orden(int * pArr, int numeros, int contador, int numeroMayor, int intercambio){



	for (int i = 0; i < numeros; ++i){
		for (int j = 0; j < numeros; ++j){

			if(pArr[i] > pArr[j]){

			//printf("1. compraracion entre %d y %d\n\n", pArr[j], pArr[i]);
			//printf("2. valor antes del intercambio %d\n\n ", intercambio);

				pArr[j] = pArr[i];

				intercambio = pArr[i];

			//printf("3. valor despues del intercambio  ,%d\n\n",intercambio);


			}



		}


	}

						printf("4. valor final ,%d\n\n",intercambio);


}


int main(){

int arr[100];
int *pArr = arr;
int numeros, contador = 0;
int numeroMayor = 0;
int intercambio = 0;



printf("Introduce cuantos numeros quieres usar: \n");
scanf("%d", &numeros);

for (int i = 0; i < numeros; ++i){

printf("Numero en la posicion [%d]: ", i + 1);
scanf("%d", &arr[i]);

}

orden(pArr, numeros, contador, numeroMayor, intercambio);



return 0;

}