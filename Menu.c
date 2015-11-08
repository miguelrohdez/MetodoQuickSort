#include <stdlib.h>//Standard Library
#include <stdio.h>//Standard Input Ouput
#include <conio.h>
int cas;
char res='s';

int main()
{
	do{
		printf("\n\t\tProgramas\n");
		printf("\n\t1\xFA Generador de la lista de numeros \n");
		printf("\n\t2\xFA Metodo QuickSort \n")	;
		printf("\nEscribe un n\xA3mero para abrir el programa\n");
		scanf("%i",&cas);
			switch( cas )
			{
  			case 1: system("Start GeneradorNumeros.exe");
			break; 
  			case 2: system("Start QuickSort.exe"); 
  			break;
  			default: printf("No es una opcion valida");
			}
	
		printf("\n Escribe R para repetir u otro caracter para salir\n");        
        res=getch();
    }
    
    while((res=='r') || (res=='r'));
	return 0;
}
