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
//#include "eEditorial.h"

int main(void) {
	setbuf(stdout, NULL);
	int option;
	int flagPrimeraCargaLibros = -1;
	int flagPrimeraCargaEditoriales = -1;
	char nombre[1000];
	LinkedList 	*listaEditoriales = ll_newLinkedList();
	LinkedList *listaLibros = ll_newLinkedList();
	LinkedList *listaFiltrada = NULL;

	do {
		utn_getNumero(&option,
				"Menu:\n1.Leer un archivo con los datos de libros de datoseLibro.csv\n2.Leer un archivo con los datos de editoriales de datoseEditorial.csv\n3.Ordenar los libros por autor\n4.Imprimir los datos de los libros (con editorial)\n5.Informar los libros de la editorial Minotauro\n10.Salir\n",
				"\n La opción ingresada no está dentro del rango solicitado\n",
				1, 10, 2);

		switch (option) {
		case 1: //Leer un archivo con los datos de libros
			printf("\nIngrese el nombre y ruta del archivo que desea abrir: ");
			gets(nombre);
			if(stricmp(nombre, "datoseLibro.csv") == 0){

				if (controller_loadFromTextLibros(nombre, listaLibros) == 0) {
					flagPrimeraCargaLibros = 0;
				}
			} else {
				printf("\nError, el nombre del archivo no es correcto\n");
			}
			break;

		case 2: //Leer un archivo con los datos de editoriales
			printf("\nIngrese el nombre y ruta del archivo que desea abrir: ");
			gets(nombre);
			if(stricmp(nombre, "datoseEditorial.csv") == 0){
				if (controller_loadFromTextEditoriales(nombre, listaEditoriales) == 0) {
					flagPrimeraCargaEditoriales = 0;
				}
			} else {
				printf("\nError, el nombre del archivo no es correcto\n");
			}
			break;

		case 3: //Ordenar los libros por autor
			if (flagPrimeraCargaLibros == 0){
				controller_sortLibros(listaLibros);
			}
			else {
				printf("\nError. Debe cargar los datos de libros primero con la opcion 1\n");
			}
			break;

		case 4: //Listar los libros ----con su editorial----!!!!!!
			if (flagPrimeraCargaLibros == 0 && flagPrimeraCargaEditoriales == 0){
				controller_List_eLibro(listaLibros, listaEditoriales);
			} else {
				printf("\nError. Debe cargar los datos de libros primero con la opcion 1 y tambien de las editoriales con la opcion 2\n");
			}
			break;

		case 5: //Listar los libros de la editorial MINOTAURO (filter)
			if (flagPrimeraCargaLibros == 0 && flagPrimeraCargaEditoriales == 0){
			listaFiltrada = ll_filter(listaLibros, eLibro_FiltrarPorMinotauro);
			controller_saveAsText("datos_Filtrados.csv", listaFiltrada, listaEditoriales);
			} else {
				printf("\nError. Debe cargar los datos de libros primero con la opcion 1 y tambien de las editoriales con la opcion 2\n");
			}
			break;
		}
	} while (option != 10);

	return 0;

}
