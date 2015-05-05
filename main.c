/*
 * colaPrioAB.c
 * 
 * Copyright 2015 Micas ubuntu <micas@micas-Inspiron-M5030>
 * 
 * 
 */

#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_H
#endif

#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef cola_AB_h
#include <Cola_AB.h>
#define cola_AB_h
#endif



int main()
{
	Cola_AB colprioAB;
	colprioAB=malloc(sizeof(cola_AB));
	
	inicializa_colaAB(colprioAB);  //gerardo
	esVacia(colprioAB);     //yerko y bryan
	agregaDato(colprioAB, dato); //maycol y micael
	sacaDato(colprioAB); // micael y bryan
	mostrarAB(colprioAB);    //diego
	return 0;
}
