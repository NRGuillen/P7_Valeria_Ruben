#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_ANCHO 10
#define MAX_LARGO 10
int main(){
	int tablero[10][10];

	for(int i = 0; i<9;i++){
		for(int j = 0; j<9;j++){
			printf("*%d*",tablero[i][j]);
	}
	printf("\n");
}

return 0;
}
