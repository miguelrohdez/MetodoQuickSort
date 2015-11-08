#include <stdio.h>	//Standard Input Ouput
#include <stdlib.h> //Standard Librery

int lista[150];	//tamaño de la lista
int n, i=0;	//variables
void quickSort(int [], int, int);
void ImprimeArchivo(int []);

int main(){
	//LEE EL ARCHIVO
	FILE *archivo;
	archivo= fopen("listaSinOrdenar.txt", "r");
	if(archivo != NULL){	
		while((feof(archivo))==0){
		fscanf(archivo,"%i\n",&lista[i]);
	//	printf("%i\n",lista[i]);
		i++;
		}
	}else{
		printf("No se puedo abrir el archivo\n");
	}
	//IMPRIME LA LISTA SIN ORDENAR
	printf("\n\t***** LISTA SIN ORDENAR *****\n");
	system("pause");
	for (n=0; n<150; n++){
		printf("Numero %i: %i\n",n+1, lista[n]);
	}
	//REALIZA EL ORDENAMIENTO
	quickSort(lista, 0, 149);
	//IMPRIMER LA LISTA ORDENADA
	printf("\n\n\t*****LISTA ORDENADA*****\n\n");
	system("pause");
	for (i=0; i<150; i++) 
		printf("Numero %i: %i\n",i+1, lista[i]);
	ImprimeArchivo(lista);
	
	
	return 0;
}

void quickSort(int lista[], int inf, int sup){
	int mitad, x, izq, der;
	izq = inf; 
	der= sup;
	mitad = lista[(izq+der)/2];
	do{
		while(lista[izq]<mitad && izq<sup)
			izq++;
		while(mitad<lista[der] && der>inf)
			der--;
			
		if(izq<=der){
			x = lista[izq];
			lista[izq] = lista[der];
			lista[der] = x;
			izq++;
			der--;
		}
	}while(izq <= der);
	
	if(inf<der)
		quickSort(lista, inf, der);
	if(izq<sup)
		quickSort(lista, izq, sup);
	return;
}

void ImprimeArchivo(int lista[]){
	int i=0;	
	FILE *archivo;
	archivo=fopen("listaOrdenada.txt","w+");
	
	if(archivo != NULL){
	
	printf("\n\n\t***** Generando archivo ordenado *****\n\n");
	for (i=0; i<150; i++) 
		fprintf(archivo,"Numero %i: %i\n",i+1,lista[i]);
		fclose(archivo);
	}else{
		printf("Error, no se pudo realizar el registro!!\a\n");
	}
	
	printf("\n\n\t***** Archivo generado *****\n\n");
return;
}
