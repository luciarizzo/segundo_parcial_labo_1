/*
 * eEditorial.h
 *
 *  Created on: 23 nov. 2021
 *      Author: Lucía
 */

#ifndef EEDITORIAL_H_
#define EEDITORIAL_H_

typedef struct
{
    int idEditorial;
    char nombre[128];
}eEditorial;

/*
 * \brief Compara los ID de los empleados
 * \param void* paramUno primer parametro a comparar
 * \param void* paramDos segundo parametro a comparar
 * \return retorna un -1 (descendente), 1 (ascendente) si pudo obtener, 0 si no
 */
int eEditorial_sortById(void *paramUno, void *paramDos);
eEditorial* eEditorial_new();
eEditorial* eEditorial_newParametros(char *idStr, char *nombreStr);
int eEditorial_setId(eEditorial *this, int id);
int eEditorial_setNombre(eEditorial *this, char *nombre);
int eEditorial_getId(eEditorial *this, int *idEditorial);
int eEditorial_getNombre(eEditorial *this, char *nombre);


#endif /* EEDITORIAL_H_ */
