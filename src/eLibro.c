/*
 * eLibro.c
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



eLibro* eLibros_new() {
	eLibro *pLibro = (eLibro*) malloc(sizeof(eLibro));
	if (pLibro != NULL) {
		pLibro->id = 0;
		strcpy(pLibro->titulo, "");
		strcpy(pLibro->autor, "");
		pLibro->precio = 0;
		pLibro->idEditorial = 0;
	}
	return pLibro;
}


eLibro* eLibro_newParametros(char *idStr, char *tituloStr,
		char *autorStr, char *precioStr, char *precioIdEditorial) {
	//acá paso por parametros los campos de la estructura
	eLibro *pLibro = eLibros_new();
	if (pLibro != NULL && idStr != NULL && tituloStr != NULL && autorStr != NULL
			&& precioStr != NULL && precioIdEditorial != NULL) {
		eLibro_setId(pLibro, atoi(idStr));
		eLibro_setTitulo(pLibro, tituloStr);
		eLibro_setAutor(pLibro, autorStr);
		eLibro_setPrecio(pLibro, atoi(precioStr));
		eLibro_setIdEditorial(pLibro, atoi(precioIdEditorial));
	}
	return pLibro;
}

int eLibro_setId(eLibro *this, int id) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		this->id = id;
		retorno = 0;
	}
	return retorno;
}

int eLibro_setTitulo(eLibro *this, char *titulo) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		strcpy(this->titulo, titulo);
		retorno = 0;
	}
	return retorno;
}


int eLibro_setAutor(eLibro *this, char *autor) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		strcpy(this->autor, autor);
		retorno = 0;
	}
	return retorno;
}

int eLibro_setPrecio(eLibro *this, int precio) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		this->precio = precio;
		retorno = 0;
	}
	return retorno;

}

int eLibro_setIdEditorial(eLibro *this, int idEditorial) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		this->idEditorial = idEditorial;
		retorno = 0;
	}
	return retorno;

}

int eLibro_getId(eLibro *this, int *id) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		*id = this->id;
		retorno = 0;
	}
	return retorno;
}

int eLibro_getPrecio(eLibro *this, int *precio) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		*precio = this->precio;
		retorno = 0;
	}
	return retorno;
}

int eLibro_getIdEditorial(eLibro *this, int *idEditorial) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		*idEditorial = this->idEditorial;
		retorno = 0;
	}
	return retorno;
}

int eLibro_getAutor(eLibro *this, char *autor) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		strcpy(autor, this->autor);
		retorno = 0;
	}
	return retorno;
}

int eLibro_getTitulo(eLibro *this, char *titulo) {
	int retorno;
	retorno = -1;
	if (this != NULL) {
		strcpy(titulo, this->titulo);
		retorno = 0;
	}
	return retorno;
}

int eLibro_sortByAutor(void *paramUno, void *paramDos) {
	int retorno = 0;
	char bufferNombreUno[1000];
	char bufferNombreDos[1000];
	if (paramUno != NULL && paramDos != NULL) {
		if (eLibro_getAutor((eLibro*) paramUno, bufferNombreUno) == 0
				&& eLibro_getAutor((eLibro*) paramDos, bufferNombreDos)
						== 0) {
			if (stricmp(bufferNombreUno, bufferNombreDos) > 0) {
				retorno = 1;
			}
			if (stricmp(bufferNombreUno, bufferNombreDos) < 0) {
				retorno = -1;
			}
		}
	}
	return retorno;
}

int eLibro_FiltrarPorMinotauro(void* elemento){
	int retorno = -1;
	eLibro* auxLibro;
	auxLibro = (eLibro*)elemento;

	if(auxLibro->idEditorial == 4){
		printf("\nEntro a if de filtrar\n");
		retorno = 0;
	}

	return retorno;
}


