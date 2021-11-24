#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "eLibro.h"

int parser_eLibroFromText(FILE *pFile, LinkedList *listaLibros) {
	int retorno;
	retorno = -1;
	int variablesLeidas;
	char auxId[1000];
	char auxAutor[1000];
	char auxTitulo[1000];
	char auxPrecio[1000];
	char auxIdEditorial[1000];
	eLibro *pLibro;
	if (pFile != NULL && listaLibros != NULL) {
		fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", auxId, auxAutor,
				auxTitulo, auxPrecio, auxIdEditorial);
		do {
			variablesLeidas = fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
					auxId, auxAutor, auxTitulo, auxPrecio, auxIdEditorial);
			if (variablesLeidas == 5) {
				pLibro = eLibro_newParametros(auxId, auxTitulo, auxAutor, auxPrecio,
						auxIdEditorial);
				if (pLibro != NULL) {
					ll_add(listaLibros, pLibro);
					retorno = 0;
				}
			} else {
				puts("\nError");
			}
		} while (!feof(pFile));
	}
	return retorno;
}
/*
int parser_EmployeeFromBinary(FILE *pFile, LinkedList *pArrayListEmployee) {
	int retorno;
	retorno = -1;
	int valoresRetornados;

	Employee *pEmpleado = NULL;

	if (pFile != NULL && pArrayListEmployee != NULL) {
		do {
			pEmpleado = employee_new();
			if (pEmpleado != NULL) {
				valoresRetornados = fread(pEmpleado, sizeof(Employee), 1,
						pFile);
				if (valoresRetornados == 1) {
					ll_add(pArrayListEmployee, pEmpleado);
					retorno = 0;
				} else {
					employee_delete(pEmpleado);
					break;
				}
			}
		} while (!feof(pFile));
	}
	return retorno;
}
*/
