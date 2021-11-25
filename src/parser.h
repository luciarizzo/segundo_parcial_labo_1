/*
 * parser.h
 *
 *  Created on: 9 nov. 2021
 *      Author: Lucía
 */

#ifndef PARSER_H_
#define PARSER_H_

/** \brief Parsea los datos de los libros desde el archivo datoseLibro.csv (modo texto).
 * \param path char* puntero al path del archivo a parsear
 * \param listaLibros LinkedList* puntero a LinkedList
 * \return int retorna -1 si no pudo parsear, 0 si pudo parsear
 */
int parser_eLibroFromText(FILE *pFile, LinkedList *listaLibros);

/** \brief Parsea los datos los datos de las editoriales desde el archivo datoseEditoriales.csv (modo binario).
 * \param path char* puntero al path del archivo a parsear
 * \param listaEditoriales LinkedList* puntero a LinkedList
 * \return int retorna -1 si no pudo parsear o 0 si pudo parsear
 */
int parser_eEditorialFromText(FILE *pFile, LinkedList *listaEditoriales);

#endif /* PARSER_H_ */
