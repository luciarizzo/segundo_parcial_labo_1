/*
 ============================================================================
 Name        : segundoParcial_Labo1.c
 Author      : Lucia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Controller.h"
#include "LinkedList.h"
#include "utn.h"
#include "eLibro.h"
#include "eEditorial.h"

int main(void) {
	setbuf(stdout, NULL);
	int option;
	int flagPrimeraCarga = -1;
	char nombre[1000];
	LinkedList *listaLibros = ll_newLinkedList();
	LinkedList *listaEditoriales = ll_newLinkedList();

	do {
		utn_getNumero(&option,
				"Menu:\n1.Leer un archivo con los datos de libros\n2.Leer un archivo con los datos de editoriales\n3.Ordenar los libros por autor\n4.Imprimir los datos de los libros (con editorial)\n5.Informar los libros de la editorial Minotauro\n10.Salir\n",
				"\n La opción ingresada no está dentro del rango solicitado\n",
				1, 10, 2);

		switch (option) {
		case 1: //Leer un archivo con los datos de libros
			printf("\nIngrese el nombre y ruta del archivo que desea abrir: ");
			gets(nombre);
			if(stricmp(nombre, "datoseLibro.csv") == 0){
				if (controller_loadFromText(nombre, listaLibros) == 0) {
					flagPrimeraCarga = 0;
				}
			}
			break;

		case 2: //Leer un archivo con los datos de editoriales
			printf("\nIngrese el nombre y ruta del archivo que desea abrir: ");
			gets(nombre);
			if(stricmp(nombre, "datoseEditorial.csv") == 0){
				if (controller_loadFromText(nombre, listaEditoriales) == 0) {
					flagPrimeraCarga = 0;
				}
			}
			break;

		case 3: //Ordenar los libros por autor
			if (flagPrimeraCarga == 0){
				controller_sortLibros(listaLibros);
			}
			else {
				printf("\nError. Debe cargar los datos de libros primero con la opcion 1\n");
			}
			break;

		case 4: //Listar los libros ----con su editorial----!!!!!!
			if (flagPrimeraCarga == 0){
				controller_List_eLibro(listaLibros);
			} else {
				printf("\nError. Debe cargar los datos de libros primero con la opcion 1\n");
			}
			break;

		case 5: //Listar los libros de la editorial MINOTAURO (filter)
			controller_saveAsText("datosFiltrados.csv", listaLibros);
			break;
		}
	} while (option != 10);

	return 0;

}
