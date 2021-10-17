/*
 * RJimenez.h
 *
 *  Created on: 14 oct. 2021
 *      Author: rocio
 */

#ifndef RJIMENEZ_H_
#define RJIMENEZ_H_
#define TAM_STR 256
#define TAM_INT 20

int PedirEmpleado(char mensajePedirNombre [TAM_STR], char mensajePedirApellido [TAM_STR], char mensajeDeErrorNombre [TAM_STR],
		char mensajeDeErrorApellido [TAM_STR], char mensajePedirSalario [TAM_STR], char mensajeDeErrorSalario [TAM_STR],
		char mensajePedirSector [TAM_STR], char mensajeDeErrorSector [TAM_STR], int idEmpleado, Employee* list, int len,
		char mensajeDeErrorLugar [TAM_STR], char mensajeAltaExistosa [TAM_STR]);

int EliminarEmpleado (char mensajeEliminar [TAM_STR], char mensajeErrorEliminar [TAM_STR], char mensajeEliminacionExitosa [TAM_STR],
		char mensajeErrorNoEncontrado [TAM_STR], Employee* list, int len);

int ModificarEmpleado (char mensajeModificar [TAM_STR], char mensajeErrorNoEncontrado [TAM_STR], char mensajeErrorModificar [TAM_STR],
		char mensajeOpcionesModificacion [TAM_STR], char mensajeModificarNombre [TAM_STR], char mensajeModificarApellido [TAM_STR],
		char mensajeModificarNombreExitoso [TAM_STR], char mensajeModificarNombreError [TAM_STR], char mensajeModificarApellidoExitoso [TAM_STR],
		char mensajeModificarApellidoError [TAM_STR], char mensajeModificarSueldo [TAM_STR], char mensajeModificarSueldoExitoso [TAM_STR],
		char mensajeModificarSueldoError [TAM_STR], char mensajeModificarSector [TAM_STR], char mensajeModificarSectorExitoso [TAM_STR],
		char mensajeModificarSectorError [TAM_STR], char mensajeErrorOpcionModificar [TAM_STR], Employee* list, int len);

int BuscarEmpleados (Employee* list, int len);

int MostrarEmpleados (char mensajeOpciones [TAM_STR], char mensajeErrorOpciones [TAM_STR], char mensajeOpcionOrden [TAM_STR],
		char mensajePromedioSueldo [256], Employee* list, int len);

int MostrarEmpleadosOrdenados (Employee* list, int len, int order);

int MostrarPromedioEmpleados (Employee* list, int len, char mensajePromedioSueldo [256]);

int modificarNombre (char mensajeModificar [TAM_STR], Employee emp);

int modificarApellido (char mensajeModificar [TAM_STR], Employee emp);

int modificarSueldo (char mensajeModificar [TAM_STR], Employee emp);

int modificarSector (char mensajeModificar [TAM_STR], Employee emp);

int ObtenerString(char mensaje [256], char nombre [256]);

int ValidarNombre(char nombre [256]);


/// @fn int PedirFloat(char[], char[], char[], float*)
/// @brief Funcion para pedir un numero flotante.
///
/// @param mensaje El texto que se muestra para pedir el numero flotante.
/// @param mensajeError El texto que se muestra cuando no se obtiene el tipo de dato correcto.
/// @param mensajeExitoso El texto que se muestra cuando se obtiene el tipo de dato correcto.
/// @param operando El puntero donde se guarda el numero validado y casteado.
/// @return 0 si pudo obtener el numero flotante, 1 si no pudo.

int PedirFloat(char mensaje [TAM_STR], float *operando);

/// @fn int ValidarFloat(char[])
/// @brief Funcion para validar un numero flotante.
///
/// @param operando Recibe un array de caracteres y valida si es un numero flotante.
/// @return 0 si es un numero flotante, 1 si no lo es.

int ValidarFloat (char operando [TAM_INT]);

/// @fn int PedirInt(char[], int*)
/// @brief Funcion para pedir un numero entero.
///
/// @param mensaje El texto que se muestra para pedir el numero entero.
/// @param operando El puntero donde se guarda el numero validado.
/// @return 0 si pudo obtener el numero flotante, 1 si no pudo.

int PedirInt(char mensaje [TAM_STR], int *operando);


/// @fn int ValidarInt(char[])
/// @brief Funcion para validar un numero entero.
///
/// @param operando Recibe un array de caracteres y valida si es un numero entero.
/// @return 0 si es un numero entero, 1 si no lo es.

int ValidarInt(char operando [TAM_INT]);

#endif /* RJIMENEZ_H_ */
