/*
 * RJimenez.c
 *
 *  Created on: 20 sep. 2021
 *      Author: rocio
 */
#include <string.h>


int GetOperando(char mensaje [256])
{
	int retorno;
	retorno = 0;

	printf(mensaje);
	scanf("%d", &retorno);

	return retorno;
}




int ValidarOperando(char operando [20])
{
	int retorno;
	int i;

	retorno = 0;

	for(i=0 ; i<strlen(operando) ; i++)
	{
		if(operando [i] < 48 || operando [i] > 57)
		{
			retorno = 1;
			break;
		}
	}

	return retorno;
}
