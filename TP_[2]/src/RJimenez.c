/*
 * RJimenez.c
 *
 *  Created on: 14 oct. 2021
 *      Author: rocio
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "RJimenez.h"

#define TAM_STR 256
#define TAM_INT 20

int PedirEmpleado(char mensajePedirNombre [TAM_STR], char mensajePedirApellido [TAM_STR], char mensajeDeErrorNombre [TAM_STR],
		char mensajeDeErrorApellido [TAM_STR], char mensajePedirSalario [TAM_STR], char mensajeDeErrorSalario [TAM_STR],
		char mensajePedirSector [TAM_STR], char mensajeDeErrorSector [TAM_STR], int idEmpleado, Employee* list, int len,
		char mensajeDeErrorLugar [TAM_STR], char mensajeAltaExistosa [TAM_STR])
{
	int retorno;
	Employee aux;
	int lugarLibre;

	lugarLibre = BuscarLibre(list, len);
	retorno = -1;

	if(lugarLibre != -1)
	{
		if(ObtenerString(mensajePedirNombre, aux.name) == 0)

		{
			if(ObtenerString(mensajePedirApellido, aux.lastName) == 0)
			{
				if(PedirFloat(mensajePedirSalario, &aux.salary) == 0)
				{
					if(PedirInt(mensajePedirSector, &aux.sector)== 0)
					{
						retorno = addEmployee(list, 1000, idEmpleado, aux.name, aux.lastName,
								aux.salary, aux.sector);
						printf(mensajeAltaExistosa);
					}else
					{
						printf(mensajeDeErrorSector);
					}
				}
				else
					{
						printf(mensajeDeErrorSalario);
					}
			}
			else
			{
				printf(mensajeDeErrorApellido);
			}
		}
		else
		{
			printf(mensajeDeErrorNombre);
		}
	}
	else
	{
		printf(mensajeDeErrorLugar);
	}

	return retorno;
}


int EliminarEmpleado (char mensajeEliminar [TAM_STR], char mensajeErrorEliminar [TAM_STR], char mensajeEliminacionExitosa [TAM_STR],
		char mensajeErrorNoEncontrado [TAM_STR], Employee* list, int len)
{
	int retorno;
	int opcion;
	int indice;

	retorno = -1;

	printEmployees(list, len);

	if (PedirInt(mensajeEliminar, &opcion) == 0)
	{
		indice = findEmployeeById(list, len, opcion);
		if(indice != -1)
		{
			list[indice].isEmpty = 0;
			printf(mensajeEliminacionExitosa);
		} else
		{
			printf(mensajeErrorNoEncontrado);
		}
	} else
	{
		printf (mensajeErrorEliminar);
	}

	return retorno;
}


int BuscarEmpleados (Employee* list, int len)
{
	int retorno;
	int i;
	retorno = 1;

	for (i = 0; i < len ; i++)
	{
		if (list[i].isEmpty == 1)
		{
			retorno = 0;
			break;
		}
	}
	return retorno;
}


int ModificarEmpleado (char mensajeModificar [TAM_STR], char mensajeErrorNoEncontrado [TAM_STR], char mensajeErrorModificar [TAM_STR],
		char mensajeOpcionesModificacion [TAM_STR], char mensajeModificarNombre [TAM_STR], char mensajeModificarApellido [TAM_STR],
		char mensajeModificarNombreExitoso [TAM_STR], char mensajeModificarNombreError [TAM_STR], char mensajeModificarApellidoExitoso [TAM_STR],
		char mensajeModificarApellidoError [TAM_STR], char mensajeModificarSueldo [TAM_STR], char mensajeModificarSueldoExitoso [TAM_STR],
		char mensajeModificarSueldoError [TAM_STR], char mensajeModificarSector [TAM_STR], char mensajeModificarSectorExitoso [TAM_STR],
		char mensajeModificarSectorError [TAM_STR], char mensajeErrorOpcionModificar [TAM_STR], Employee* list, int len)
{
	int retorno;
	int idEmpleado;
	int indice;
	int opcion;
	retorno = -1;

	printEmployees(list, len);

	if (PedirInt(mensajeModificar, &idEmpleado) == 0)
	{
		indice = findEmployeeById(list, len, idEmpleado);
		if(indice != -1)
		{
			if (PedirInt(mensajeOpcionesModificacion, &opcion) == 0)
			{
				switch (opcion)
				{
					case 1:
						if(modificarNombre (mensajeModificarNombre, list[indice]) != -1)
						{
							printf(mensajeModificarNombreExitoso);
							retorno = 0;
						} else
						{
							printf(mensajeModificarNombreError);
						}
						break;
					case 2:
						if(modificarApellido (mensajeModificarApellido, list[indice]) != -1)
						{
							printf(mensajeModificarApellidoExitoso);
							retorno = 0;
						} else
						{
							printf(mensajeModificarApellidoError);
						}
						break;
					case 3:
						if(modificarSueldo (mensajeModificarSueldo, list[indice]) != -1)
						{
							printf(mensajeModificarSueldoExitoso);
							retorno = 0;
						} else
						{
							printf(mensajeModificarSueldoError);
						}
						break;
					case 4:
						if(modificarSector (mensajeModificarSector, list[indice]) != -1)
						{
							printf(mensajeModificarSectorExitoso);
							retorno = 0;
						} else
						{
							printf(mensajeModificarSectorError);
						}
						break;
					default:
						printf(mensajeErrorOpcionModificar);
				}
			}
		} else
		{
			printf(mensajeErrorNoEncontrado);
		}
	} else
	{
		printf (mensajeErrorModificar);
	}

	return retorno;
}


int MostrarEmpleados (char mensajeOpciones [TAM_STR], char mensajeErrorOpciones [TAM_STR], char mensajeOpcionOrden [TAM_STR],
		char mensajePromedioSueldo [256], Employee* list, int len)
{
	int retorno;
	int opcion;
	int order;
	retorno = -1;

	if (PedirInt(mensajeOpciones, &opcion) == 0)
	{
		switch (opcion)
		{
			case 1:
				if (PedirInt(mensajeOpcionOrden, &order) == 0)
				{
					MostrarEmpleadosOrdenados (list, len, order);
				}
				break;
			case 2:
				MostrarPromedioEmpleados (list, len, mensajePromedioSueldo);
				break;
			default:
				printf(mensajeErrorOpciones);
		}
	}
	return retorno;
}

int MostrarEmpleadosOrdenados (Employee* list, int len, int order)
{
	int retorno;
	retorno = -1;

	retorno = sortEmployees(list, len, order);
	retorno = printEmployees(list, len);

	return retorno;
}


int MostrarPromedioEmpleados (Employee* list, int len, char mensajePromedioSueldo [256])
{
	int retorno;
    int contador;
    float acumulador;
    float promedio;

    retorno = -1;
    contador = 0;
    acumulador = 0;
    promedio = 0;

    for (int i = 0; i < len; i++)
    {
        if (list[i].isEmpty == 1)
        {
        	acumulador = acumulador + list[i].salary;
        	contador++;
        }
    }

    retorno = 0;

    promedio = acumulador / contador;
    printf(mensajePromedioSueldo);
    printf(" %f\n\n", promedio);
    for (int i = 0; i < len; i++)
    {
        if (promedio < list[i].salary && list[i].isEmpty == 1)
        {
        	printEmployee(list[i]);
            printf("\n\n");
        }
    }

    return retorno;
}


int modificarNombre (char mensajeModificar [TAM_STR], Employee emp)
{
	int retorno;
	char nuevoNombre[51];
	retorno = -1;


	retorno = ObtenerString(mensajeModificar, nuevoNombre);
	if (retorno != -1)
	{
		strcpy(emp.name, nuevoNombre);
	}

	return retorno;
}

int modificarApellido (char mensajeModificar [TAM_STR], Employee emp)
{
	int retorno;
	char nuevoApellido[51];
	retorno = -1;


	retorno = ObtenerString(mensajeModificar, nuevoApellido);
	if (retorno != -1)
	{
		strcpy(emp.lastName, nuevoApellido);
	}

	return retorno;
}

int modificarSueldo (char mensajeModificar [TAM_STR], Employee emp)
{
	int retorno;
	float nuevoSueldo;
	retorno = -1;


	retorno = PedirFloat(mensajeModificar, &nuevoSueldo);
	if (retorno != -1)
	{
		emp.salary = nuevoSueldo;
	}

	return retorno;
}


int modificarSector (char mensajeModificar [TAM_STR], Employee emp)
{
	int retorno;
	int nuevoSector;
	retorno = -1;


	retorno = PedirInt(mensajeModificar, &nuevoSector);
	if (retorno != -1)
	{
		emp.sector = nuevoSector;
	}

	return retorno;
}


int ObtenerString(char mensaje [TAM_STR], char nombre [TAM_STR])
{
	char nombreSinValidar [TAM_STR];
	int retorno;

	retorno = -1;

	printf(mensaje);
	scanf("%s", nombreSinValidar);

	retorno = ValidarNombre(nombreSinValidar);

	if(retorno == 0)
	{
		strcpy(nombre, nombreSinValidar);
	}

	return retorno;
}

int ValidarNombre(char nombre [TAM_STR])
{
	int retorno;
	int i;

	retorno = 0;

	for(i = 0; i < strlen(nombre); i++)
	{
		if(nombre[i] >= '0' && nombre[i] <= '9')
		{
			retorno = -1;
			break;
		}
	}

	return retorno;
}

int PedirFloat(char mensaje [TAM_STR], float *operando)
{
	int retorno;
	char numeroSinValidar [TAM_INT];
	retorno = 0;

	printf(mensaje);
	scanf("%s", numeroSinValidar);

	if (ValidarFloat(numeroSinValidar) == 0)
	{
		*operando = atof(numeroSinValidar);

	} else
	{
		retorno = 1;
	}
	return retorno;
}


int ValidarFloat (char operando [TAM_INT])
{
	int retorno;
	int banderaFlotante;
	int banderaNegativa;
	int i;

	retorno = 0;
	banderaFlotante = 0;
	banderaNegativa = 0;


	for(i=0 ; i<strlen(operando) ; i++)
	{
		if(operando [i] < '0' || operando [i] > '9')
		{
			if (operando [i] == '.')
			{
				if (banderaFlotante == 1)
				{
					retorno = 1;
					break;
				}
			banderaFlotante = 1;

			} else if (operando[i] == '-')
			{
				if (banderaNegativa == 1)
				{
					retorno = 1;
					break;
				}
				banderaNegativa = 1;
			} else
			{
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}

int PedirInt(char mensaje [TAM_STR], int *operando)
{
	int retorno;
	char numeroSinValidar [TAM_INT];
	retorno = 0;

	printf(mensaje);
	scanf("%s", numeroSinValidar);

	if (ValidarInt(numeroSinValidar) == 0)
	{
		*operando = atoi(numeroSinValidar);

	} else
	{
		retorno = 1;
	}

	return retorno;
}


int ValidarInt(char operando [TAM_INT])
{
	int retorno;
	int i;

	retorno = 0;

	for(i=0 ; i<strlen(operando) ; i++)
	{
		if(operando [i] < '0' || operando [i] > '9')
		{
			retorno = 1;
			break;
		}
	}

	return retorno;
}


