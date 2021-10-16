/*
 * ArrayEmployees.c
 *
 *  Created on: 14 oct. 2021
 *      Author: rocio
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <string.h>

int initEmployees(Employee* list, int len)
{
	int i;

	for(i = 0; i < len; i++)
	{
		list[i].isEmpty = 0;
	}

	return 0;
}

int addEmployee(Employee* list, int len, int id, char name[51],char
lastName[51],float salary,int sector)
{
	int retorno;
	int i;

	retorno = -1;

	i = BuscarLibre(list, len);

	list[i].id = id;
	list[i].salary = salary;
	list[i].sector = sector;
	strcpy(list[i].name, name);
	strcpy(list[i].lastName, lastName);

	retorno = 0;

	return retorno;
}

int BuscarLibre(Employee* list, int len)
{
	int retorno;
	int i;

	retorno = -1;

	for(i = 0; i < len; i++)
	{
		if(list[i].isEmpty == 0)
		{
			retorno = i;
			break;
		}
	}

	return retorno;
}

int findEmployeeById(Employee* list, int len,int id)
{
	int retorno;
	int i;

	retorno = -1;

	for(i = 0; i < len; i++)
	{
		if(list[i].id == id)
		{
			retorno = i;
			break;
		}
	}

	return retorno;
}


int removeEmployee(Employee* list, int len, int id)
{
	int retorno;
	int i;

	retorno = -1;

	i = findEmployeeById(list, len, id);

	if(i != -1)
	{
		list[i].isEmpty = 0;
		return 0;
	}

	return retorno;
}

int printEmployees(Employee* list, int length)
{
	int i;

	printf("Id\tNombre\tApellido\tSalario\tSector");

	for(i = 0; i < length; i++)
	{
		if(list[i].isEmpty == 1)
		{
			printEmployee (list[i]);
		}

	}

	return 0;
}

int printEmployee (Employee emplo)
{
	int retorno;
	retorno = 0;

	printf("%d\t", emplo.id);
	printf(emplo.name + '\t');
	printf(emplo.lastName + '\t');
	printf("%f\t", emplo.salary);
	printf("%d\t", emplo.sector+ '\n');

	return retorno;
}

int sortEmployees(Employee* list, int len, int order)
{
    int bandera;
    Employee buffer;

    if (order >= 1)
    {
    	do
    	    {
    	    	bandera = 0;
    	        for (int i = 0; i < len - 1; i++)
    	        {
    	            if(strcmp(list[i].lastName, list[i+1].lastName) == 0)
    	            {
    	                buffer = list[i];
    				    list[i] = list[i+1];
    				    list[i+1] = buffer;
    	                bandera = 1;
    	            } else if (strcmp(list[i].lastName, list[i+1].lastName) == 1 && list[i].sector > list[i+1].sector)
    	            {
    	                buffer = list[i];
    				    list[i] = list[i+1];
    				    list[i+1] = buffer;
    	                bandera = 1;
    	            }
    	        }
    	    }while (bandera);
    } else
    {
    	do
    	    {
    	    	bandera = 0;
    	        for (int i = 0; i < len - 1; i++)
    	        {
    	            if(strcmp(list[i].lastName, list[i+1].lastName) == 0)
    	            {
    	                buffer = list[i];
    				    list[i] = list[i+1];
    				    list[i+1] = buffer;
    	                bandera = 1;
    	            } else if (strcmp(list[i].lastName, list[i+1].lastName) == 1 && list[i].sector < list[i+1].sector)
    	            {
    	                buffer = list[i];
    				    list[i] = list[i+1];
    				    list[i+1] = buffer;
    	                bandera = 1;
    	            }
    	        }
    	    }while (bandera);
    }
    return bandera;
}
