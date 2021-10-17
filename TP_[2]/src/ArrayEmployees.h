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


/// @fn int initEmployees(Employee*, int)
/// @brief
///
/// @param list
/// @param len
/// @return
int initEmployees(Employee* list, int len);

/// @fn int addEmployee(Employee*, int, int, char[], char[], float, int)
/// @brief
///
/// @param list
/// @param len
/// @param id
/// @param name
/// @param lastName
/// @param salary
/// @param sector
/// @return
int addEmployee(Employee* list, int len, int id, char name[51],char
lastName[51], float salary, int sector);

int BuscarLibre(Employee* list, int len);

int findEmployeeById(Employee* list, int len,int id);

int removeEmployee(Employee* list, int len, int id);

int printEmployees(Employee* list, int length);

int printEmployee (Employee emplo);

int sortEmployees(Employee* list, int len, int order);

#endif /* ARRAYEMPLOYEES_H_ */
