/*
 * eLibro.h
 *
 *  Created on: 23 nov. 2021
 *      Author: Lucía
 */

#ifndef ELIBRO_H_
#define ELIBRO_H_

typedef struct
{
    int id;
    char titulo[128];
    char autor[128];
    int precio;
    int idEditorial;
}eLibro;


eLibro* eLibros_new();
eLibro* eLibro_newParametros(char *idStr, char *tituloStr,
		char *autorStr, char *precioStr, char *precioIdEditorial);

int eLibro_setId(eLibro *this, int id);
int eLibro_setTitulo(eLibro *this, char *titulo);
int eLibro_setAutor(eLibro *this, char *autor);
int eLibro_setPrecio(eLibro *this, int precio);
int eLibro_setIdEditorial(eLibro *this, int idEditorial);

int eLibro_getId(eLibro *this, int *id);
int eLibro_getPrecio(eLibro *this, int *precio);
int eLibro_getIdEditorial(eLibro *this, int *idEditorial);
int eLibro_getAutor(eLibro *this, char *autor);
int eLibro_getTitulo(eLibro *this, char *titulo);

int eLibro_sortByAutor(void *paramUno, void *paramDos);

#endif /* ELIBRO_H_ */
