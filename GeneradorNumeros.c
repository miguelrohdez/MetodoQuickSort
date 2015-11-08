#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i;
int numero;

int main(){
	srand(time(NULL));
		
	FILE *archivo;
	archivo=fopen("listaSinOrdenar.txt","w+");
	
	if(archivo != NULL){
	
	printf("\n\n\t***** Generador de numeros a archivo *****\n\n");
	for(i=0; i<150; i++){
		numero=rand() % 150;
		printf("Numero %i: %d\n",i+1,numero);
		fprintf(archivo,"%d ",numero);
	}
		
		fclose(archivo);
	}else{
		printf("Error, no se pudo realizar el registro!!\a\n");
	}
	
	printf("Archivo GENERADO");
return 0;
}
