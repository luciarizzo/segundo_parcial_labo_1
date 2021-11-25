/*
 * eEditorial.c
 *
 *  Created on: 23 nov. 2021
 *      Author: Lucía
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "eLibro.h"
#include "eEditorial.h"
#include "utn.h"


eEditorial* eEditorial_new() {
	eEditorial *pEditorial = (eEditorial*) malloc(sizeof(eEditorial));
	if (pEditorial != NULL) {
		pEditorial->idEditorial = 0;
		strcpy(pEditorial->nombre, "");
	}
	return pEditorial;
}


eEditorial* eEditorial_newParametros(char *idStr, char *nombreStr) {
	//acá paso por parametros los campos de la estructura
	eEditorial *pEditorial = eEditorial_new();
	if (pEditorial != NULL && idStr != NULL && nombreStr != NULL) {
		eEditorial_setId(pEditorial, atoi(idStr));
		eEditorial_setNombre(pEditorial, nombreStr);
	}
	return pEditorial;
}

int eEditorial_setId(eEditorial *this, int id) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		this->idEditorial = id;
		retorno = 0;
	}
	return retorno;
}

int eEditorial_setNombre(eEditorial *this, char *nombre) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		strcpy(this->nombre, nombre);
		retorno = 0;
	}
	return retorno;
}

/*
int eLibro_setAutor(eLibro *this, char *autor) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		strcpy(this->autor, autor);
		retorno = 0;
	}
	return retorno;
}
*/
/*
int eLibro_setPrecio(eLibro *this, int precio) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		this->precio = precio;
		retorno = 0;
	}
	return retorno;

}
*/
/*
int eLibro_setIdEditorial(eLibro *this, int idEditorial) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		this->idEditorial = idEditorial;
		retorno = 0;
	}
	return retorno;

}
*/

int eEditorial_getId(eEditorial *this, int *idEditorial) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		*idEditorial = this->idEditorial;
		retorno = 0;
	}
	return retorno;
}

int eEditorial_getNombre(eEditorial *this, char *nombre) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		strcpy(nombre, this->nombre);
		retorno = 0;
	}
	return retorno;
}
