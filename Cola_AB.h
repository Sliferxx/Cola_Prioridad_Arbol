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
//a continuacion un intento de agregaDato...
int SacaDato(Cola_AB colprioAB)
{
	int aux;
	if (esVacia()!=0)
	{ 
		printf("\n Error, debe crear una cola\n");
		return 0;
	}
	else
	{
	   
        	if (esVacia()==0) { /* Hay algún elemento que sacar */
        	int aux
        	aux=dato;
        	dato=dato->pto_insercion;
        	free (aux);
	
	}
}


int agregaDato(Cola_AB colprioAB, int dato){

	//insertar "raiz"
	if (colprioAB->Arreglo_AB[0]==0){ //aca se compara y se ve si es el primer termino
		colprioAB->Arreglo_AB[colprioAB->pto_insercion]=dato;   //aca se agrega el dato
		(colaprioAB->pto_insercion)++;  //aqui se aumenta la posicion de insercion
	}
			
	//a continuacion los casos cuando no es raiz:
	else{
		// a continuacion simplemente se inserta el dato en el punto de insercion
		colprioAB->Arreglo_AB[colprioAB->pto_insercion]=dato; 
			
		int i=colprioAB->pto_insercion;
		int padre=(i-1)/2);
		int hijo=i; //ijo recien insertado
		int posicionOrdenada=0;
		while (i>=0)&&(!posicionOrdenada){
			//si el ijo es menor que padre
			if (Arreglo_AB[hijo]<Arreglo_AB[padre]){
				//intercambio
				int temp;
				Arreglo_AB[hijo]=temp;
				Arreglo_AB[hijo]=Arreglo_AB[padre];
				Arreglo_AB[padre]=temp;
				//fin intercambio
			} 
		}
	}
			
}			
