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

void inicializa_colaAB(Cola_AB colprioAB){
	
	colprioAB->tam = 0;
	colprioAB->pto_insercion = 0;
	i=0;
	while(i <= colprioAB->Tam_Arreglo){
		
		(colprioAB->Arreglo_AB[i])=0;
		 i++;
		
	}

}

void mostrarAB(Cola_AB colprioAB){
    printf("                %d\n\n",a[0]); 
    printf("         %d             %d\n\n",a[1],a[2]);
    printf("     %d     %d     %d      %d\n\n",a[3],a[4],a[5],a[6]);
    printf("   %d   %d  %d  %d  %d   %d  %d    %d\n\n",a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
    fflush(stdin);
    getchar();
}

int esVacia(Cola_AB colprioAB)
{
   if(colprioAB->tam =0)
   {
     printf ( “Cola esta vacía\n” );
     return 1;
   }
   else
   {
     return 0; 
   }
	 
}
