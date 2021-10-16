/*
 * ArrayEmployees.h
 *
 *  Created on: 14 oct. 2021
 *      Author: rocio
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}typedef Employee;

int initEmployees(Employee* list, int len);

int addEmployee(Employee* list, int len, int id, char name[51],char
lastName[51], float salary, int sector);

int BuscarLibre(Employee* list, int len);

int findEmployeeById(Employee* list, int len,int id);

int removeEmployee(Employee* list, int len, int id);

int printEmployees(Employee* list, int length);

int printEmployee (Employee emplo);

int sortEmployees(Employee* list, int len, int order);

#endif /* ARRAYEMPLOYEES_H_ */
