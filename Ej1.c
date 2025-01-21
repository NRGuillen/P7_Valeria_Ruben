#include <stdio.h>
#include <stdlib.h>

void orden(int * pArr, int numeros){

	for (int i = 0; i < numeros; ++i){
		for (int j = 0; j < numeros; ++j){

		if(pArr[i] > pArr[j+ 1]){

			printf("%d\n", pArr[i]);

		}else if(pArr[i +1 ] < pArr[j]){

			printf("%d\n", pArr[j]);
		}


		}

	}

}

int main(){

int arr[100];
int *pArr = arr;
int numeros, contador = 0;


printf("Introduce cuantos numeros quieres usar: \n");
scanf("%d", &numeros);

for (int i = 0; i < numeros; ++i){

printf("Numero en la posicion [%d]: ", i + 1);
scanf("%d", &arr[i]);

}

orden(pArr, numeros);

return 0;
}