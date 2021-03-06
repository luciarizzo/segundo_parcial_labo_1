#include "LinkedList.h"

/** \brief Carga los datos de los libros desde el archivo datoseLibro.csv (modo texto).
 * \param path char* puntero al path del archivo a cargar
 * \param listaLibros LinkedList* puntero a LinkedList
 * \return int devuelve 0 si la carga fue exitosa o -1 si no se pudo cargar.
 */
int controller_loadFromTextLibros(char *path, LinkedList *listaLibros);

/** \brief Carga los datos de los libros desde el archivo datoseEditorial.csv (modo texto).
 * \param path char* puntero al path del archivo a cargar
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 * \return int devuelve 0 si la carga fue exitosa o -1 si no se pudo cargar.
 */
int controller_loadFromTextEditoriales(char *path, LinkedList *listaEditoriales);

/*
 * \brief Ordenar libros por autor
 * \param listaLibros LinkedList* puntero a LinkedList
 * \return int retorna -1 si no logro ordenar los empleados, 0 si logro ordenarlos
 */
int controller_sortLibros(LinkedList* listaLibros);

/**
 * \brief Guarda los datos de los libros en el archivo datos_Filtrados.csv (modo texto).
 * \param path char* puntero al archivo donde guardara los datos
 * \param listaLibros LinkedList* puntero a LinkedList
 * \return int retorna -1 si no logro guardar los datos, 0 si los guardo
 */
int controller_saveAsText(char* path , LinkedList* listaLibros, LinkedList *listaEditoriales);

/** \brief Listar libros
 * \param listaLibros LinkedList* puntero a LinkedList
 *  * \param listaEditoriales LinkedList* puntero a LinkedList
 * \return int retorna -1 si no logro listar los empleados, 0 si logra listarlo
 */
int controller_List_eLibro(LinkedList *listaLibros, LinkedList *listaEditoriales);

/** \brief Toma un ID de editorial y obtiene el nombre que corresponde a ese ID
 * \param int id ID de la editorial a conseguir el nombre
 * \param char *editorialIdStr nombre de la editorial
 *  param listaEditoriales LinkedList* puntero a LinkedList
 * \return int retorna -1 si no logro listar los empleados, 0 si logra listarlo
 */
int controller_IdEditorialToNombreEditorial(int id, char *editorialIdStr,
		LinkedList *listaEditoriales);

//int controller_descuentoLibroPorEditorial(LinkedList* listaLibros);

/////////////////////////////////////////////////////////////////////////////////////

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 * \param path char* puntero al path del archivo a cargar
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 * \return int devuelve 0 si la carga fue exitosa o -1 si no se pudo cargar.
 *
 */
//int controller_loadFromBinary(char* path , LinkedList* listaLibros);

/*
 * \brief Obtiene el maximo ID de todos los empleados cargados en la lista
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 * \return int devuelve el maximo ID obtenido
 */
//int controller_getMaxId(LinkedList* listaLibros);

/**
 * \brief Alta de empleados
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 * \return int devuelve 0 si la carga fue exitosa o -1 si no se pudo cargar.
 */
//int controller_findEmployeebyIdReturnIndex(LinkedList* listaLibros, int id);

/*
 * \brief Encuentra por ID
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 */
//int controller_addEmployee(LinkedList* pArrayListEmployee);

/**
 * \brief Permite modificar datos de empleado
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 * \return int Retorna -1 si no logro editar el empleado y 0 si logro editar correctamente
 */
//int controller_editEmployee(LinkedList* pArrayListEmployee);

/* \brief Da de baja un empleado
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 * \return int retorna -1 si no logro dar de baja al empleado, 0 si logro darlo de baja
 */
//int controller_removeEmployee(LinkedList* pArrayListEmployee);

/** \brief Listar empleados
 * \param pArrayListEmployee LinkedList* puntero a LinkedList
 * \return int retorna -1 si no logro listar los empleados, 0 si logra listarlo
 */
//int controller_ListEmployee(LinkedList* pArrayListEmployee);


