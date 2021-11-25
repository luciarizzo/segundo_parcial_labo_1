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

/*
 * \brief Asigna el espacio en memoria para los libros y le inicializa valores
 * \return retorna un puntero a eLibro
 */
eLibro* eLibros_new();
/*
 * \brief Asigna los parametros correspondientes al libro
 * \return retorna un puntero a eLibro
 */
eLibro* eLibro_newParametros(char *idStr, char *tituloStr,
		char *autorStr, char *precioStr, char *precioIdEditorial);
/*
 * \brief Asigna el ID al libro
 * \param eLibro * this puntero al libro
 * \param int id id del libro a setear
 * \return retorna un 0 si pudo asignar, -1 si no.
 */
int eLibro_setId(eLibro *this, int id);
/*
 * \brief Asigna el titulo al libro
 * \param eLibro * this puntero al libro
 * \param char* nombre del libro a setear
 * \return retorna un 0 si pudo asignar, -1 si no.
 */
int eLibro_setTitulo(eLibro *this, char *titulo);
/*
 * \brief Asigna el autor al libro
 * \param eLibro * this puntero al libro
 * \param char* autor del libro a setear
 * \return retorna un 0 si pudo asignar, -1 si no.
 */
int eLibro_setAutor(eLibro *this, char *autor);
/*
 * \brief Asigna el precio del libro
 * \param eLibro * this puntero al libro
 * \param int* precio del libro a setear
 * \return retorna un 0 si pudo asignar, -1 si no.
 */
int eLibro_setPrecio(eLibro *this, int precio);
/*
 * \brief Asigna el Id de editorial del libro
 * \param eLibro * this puntero al libro
 * \param int* idEditorial del libro a setear
 * \return retorna un 0 si pudo asignar, -1 si no.
 */
int eLibro_setIdEditorial(eLibro *this, int idEditorial);
/*
 * \brief Obtiene el ID del libro
 * \param eEditorial* this puntero a libro
 * \param int id id de la editorial a obtener
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eLibro_getId(eLibro *this, int *id);

/*
 * \brief Obtiene el precio del libro
 * \param eLibro* this puntero a libro
 * \param int precio precio de la editorial a obtener
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eLibro_getPrecio(eLibro *this, int *precio);

/*
 * \brief Obtiene el idEditorial del libro
 * \param eLibro* this puntero a libro
 * \param int idEditorial de la editorial a obtener
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eLibro_getIdEditorial(eLibro *this, int *idEditorial);
/*
 * \brief Obtiene el autor del libro
 * \param eLibro* this puntero a libro
 * \param char* autor de la editorial a obtener
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eLibro_getAutor(eLibro *this, char *autor);
/*
 * \brief Obtiene el titulo del libro
 * \param eLibro* this puntero a libro
 * \param char* titulo de la editorial a obtener
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eLibro_getTitulo(eLibro *this, char *titulo);
/*
 * \brief Pasa por parametro el ID de la editorial y devuelve el nombre de la misma
 * \param char* editorialIdStr  puntero donde guardar el string del nombre de editorial
 * \param int id de la editorial a obtener el string
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eLibro_IdToEditorial(int id, char* editorialIdStr);
/*
 * \brief Filtra las editoriales cuyo nombre sea Minotauro (id 4)
 * \param void* elemento  recibe por parametro en este caso el auxLibro para filtrar segun la condicion
 * \return retorna un 0 si pudo obtener, -1 si no
 */
int eLibro_FiltrarPorMinotauro(void* elemento);

/*
 * \brief Compara los nombres de los autores de libros
 * \param void* paramUno primer parametro a comparar
 * \param void* paramDos segundo parametro a comparar
 * \return retorna un -1 (descendente), 1 (ascendente) si pudo obtener, 0 si no
 */
int eLibro_sortByAutor(void *paramUno, void *paramDos);

#endif /* ELIBRO_H_ */
