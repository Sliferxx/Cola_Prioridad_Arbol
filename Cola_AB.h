#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif 

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif


#define Tam_Arreglo 15 
//a continucion se crea la estructura cola Arbol//

typedef struct Nodo_Cola_AB {
int tam;
int Arreglo_AB[Tam_Arreglo];
int pto_insercion;
}Cola_AB;

Cola_AB inicializa_colaAB(colprioAB){
	
	colprioAB->tam = 0;
	i=0;
	while(i <= Tam_Arreglo){
		
	(colprioAB->(Arreglo_AB[i]))=0;
	 i++;
		
	}
	
	return(colprioAB)
	
}

mostrarAB(colprioAB){
    printf("                %d\n\n",a[0]); 
    printf("         %d             %d\n\n",a[1],a[2]);
    printf("     %d     %d     %d      %d\n\n",a[3],a[4],a[5],a[6]);
    printf("   %d   %d  %d  %d  %d   %d  %d    %d\n\n",a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
    fflush(stdin);
    getchar();
}
