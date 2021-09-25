/*
 * RJimenez.c
 *
 *  Created on: 20 sep. 2021
 *      Author: rocio
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RJimenez.h"

#define TAM_STR 256
#define TAM_INT 20


int PedirFloat(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExitoso [TAM_STR], float *operando)
{
	int retorno;
	char numeroSinValidar [TAM_INT];
	retorno = 0;

	printf(mensaje);
	scanf("%s", numeroSinValidar);

	if (ValidarFloat(numeroSinValidar) == 0)
	{
		*operando = atof(numeroSinValidar);
		printf(mensajeExitoso);
	} else
	{
		printf(mensajeError);
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



void HacerCalculos(float primerOperando, float segundoOperando, float *resultadoSuma, float *resultadoResta, float *resultadoMultiplicacion, float *resultadoDivision, int *resultadoFactorialPrimerNumero, int *resultadoFactorialSegundoNumero)
{
	*resultadoSuma = SumaCalculadora(primerOperando, segundoOperando);
	*resultadoResta = RestaCalculadora(primerOperando, segundoOperando);
	*resultadoMultiplicacion = MultiplicacionCalculadora (primerOperando, segundoOperando);
	*resultadoDivision = DivisionCalculadora (primerOperando, segundoOperando);
	*resultadoFactorialPrimerNumero = Factorial(primerOperando);
	*resultadoFactorialSegundoNumero = Factorial(segundoOperando);
}


float SumaCalculadora (float primerOperando, float segundoOperando)
{
	float retorno;

	retorno = primerOperando + segundoOperando;

	return retorno;
}


float RestaCalculadora (float primerOperando, float segundoOperando)
{
	float retorno;

	retorno = primerOperando - segundoOperando;

	return retorno;
}


float MultiplicacionCalculadora (float primerOperando, float segundoOperando)
{
	float retorno;

	retorno = primerOperando * segundoOperando;

	return retorno;
}


float DivisionCalculadora (float primerOperando, float segundoOperando)
{
	float retorno = 0;

	if (segundoOperando != 0)
	{
		retorno = primerOperando / segundoOperando;
	}

	return retorno;
}


int Factorial (float operando)
{
	int retorno = 1;
	int numeroEntero;
	int factorial = 1;

	numeroEntero = (int)operando;

	if (operando >= 0)
	{
		for (int i = 1; i < numeroEntero + 1; i++)
		{
			factorial = factorial * i;
		}
	}

	retorno = factorial;

	return retorno;
}


void MostrarResultados (char mensajeSuma [TAM_STR], char mensajeResta [TAM_STR], char mensajeMultiplicacion [TAM_STR], char mensajeDivision [TAM_STR], char mensajeDivisionError [TAM_STR], char mensajeFactorialUno [TAM_STR], char mensajeFactorialDos [TAM_STR], float resultadoSuma, float resultadoResta, float resultadoDivision, float resultadoMultiplicacion, int resultadoFactorialUno, int resultadoFactorialDos, float operandoDos, float operandoUno, char errorEnElFactorial [TAM_STR])
{
	printf(mensajeSuma, resultadoSuma);
	printf(mensajeResta, resultadoResta);
	printf(mensajeMultiplicacion, resultadoMultiplicacion);
	if (operandoDos == 0)
	{
		printf(mensajeDivisionError);
	} else
	{
		printf(mensajeDivision, resultadoDivision);
	}

	if(operandoUno < 0)
	{
		printf(errorEnElFactorial);
	} else
	{
		printf(mensajeFactorialUno, resultadoFactorialUno);
	}

	if(operandoDos < 0)
	{
		printf(errorEnElFactorial);
	}else
	{
		printf(mensajeFactorialDos, resultadoFactorialDos);
	}
}
