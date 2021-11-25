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
 * \brief Compara los ID de las editoriales
 * \param void* paramUno primer parametro a comparar
 * \param void* paramDos segundo parametro a comparar
 * \return retorna un -1 (descendente), 1 (ascendente) si pudo obtener, 0 si no
 */
int eEditorial_sortById(void *paramUno, void *paramDos);
/*
 * \brief Asigna el espacio en memoria para la editorial y le inicializa valores
 * \return retorna un puntero a eEditorial
 */
eEditorial* eEditorial_new();
/*
 * \brief Asigna los parametros correspondientes a la editorial
 * \return retorna un puntero a eEditorial
 */
eEditorial* eEditorial_newParametros(char *idStr, char *nombreStr);
/*
 * \brief Asigna el ID a la editorial
 * \param eEditorial * this puntero a editorial
 * \param int id id de la editorial a setear
 * \return retorna un 0 si pudo asignar, -1 si no.
 */
int eEditorial_setId(eEditorial *this, int id);

/*
 * \brief Asigna el nombre a la editorial
 * \param eEditorial * this puntero a editorial
 * \param char* nombre del empleado a setear
 * \return retorna un 0 si pudo asignar, -1 si no.
 */
int eEditorial_setNombre(eEditorial *this, char *nombre);

/*
 * \brief Obtiene el ID de la editorial
 * \param eEditorial* this puntero a editorial
 * \param int id id de la editorial a obtener
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eEditorial_getId(eEditorial *this, int *idEditorial);

/*
 * \brief Obtiene el nombre de la editorial
 * \param eEditorial* this puntero a editorial
 * \param char* nombre nombre de la editorial a obtener
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eEditorial_getNombre(eEditorial *this, char *nombre);
//int eEditorial_IdEditorialToNombreEditorial(int id, char *editorialIdStr, LinkedList *listaEditoriales);


#endif /* EEDITORIAL_H_ */
