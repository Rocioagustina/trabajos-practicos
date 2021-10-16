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

int PedirFloat(char mensaje [TAM_STR], float *operando);

int ValidarFloat (char operando [20]);

int PedirInt(char mensaje [TAM_STR], int *operando);

int ValidarInt(char operando [TAM_INT]);

#endif /* RJIMENEZ_H_ */
