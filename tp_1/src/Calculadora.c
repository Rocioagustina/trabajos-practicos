
#include <stdio.h>
#include <stdlib.h>
#include "RJimenez.h"


#define MensajeOpcionUno "1. Ingresar 1er operando (A = "
#define MensajeOpcionDos "2. Ingresar 2do operando (B = "
#define MensajeOpcionTres "3. Calcular todas las operaciones\n"
#define MensajeOpcionCuatro "4. Informar resultados\n"
#define MensajeOpcionCinco "5. Salir"
#define Espaciador "\n\n"
#define SolicitarOpcion "Por favor, ingresar una opcion: "
#define IngresePrimerOperando "Por favor ingrese el primer operando: "
#define IngreseSegundoOperando "Por favor ingrese el segundo operando: "
#define IngresoOperandoExitoso "\n\nMensaje fue ingresado exitosamente\n"
#define IngresoOperandoError "\n\nUsted ingreso un numero erroneo\n"
#define FinDelProceso "Calculadora cerrada con exito"
#define FaltaIngresarNumeros "\n\nPor favor ingrese los dos operandos para poder hacer los calculos"
#define CalculosRealizadosCorrectamente "Los calculos se han realizado correctamente\n\n"
#define ErrorCalculosPrimero "\n\nPor favor primero realizar los calculos antes de pedir mostrarlos"
#define InformarSuma "El resultado de la suma es: %.2f\n"
#define InformarResta "El resultado de la resta es; %.2f\n"
#define InformarMultiplicacion "El resultado de la multiplicacion es: %.2f\n"
#define InformarErrorDivision "No se realizo la division porque no se puede dividir por 0\n"
#define InformarDivision "El resultado de la division es: %.2f\n"
#define InformarFactorialUno "El resultado del factorial del primer numero es: %d\n"
#define InformarFactorialDos "El resultado del factorial del segundo numero es: %d\n"
#define ErrorEnElFactorial "No se puede realizar el factorial en un numero negativo\n"


int main(void) {
	setbuf(stdout, NULL);


	int opcion;
	int banderaPrimerOperando;
	int banderaSegundoOperando;
	int banderaCalculos;
	int factorialPrimerNumero;
	int factoralSegundoNumero;
	float operandoUno;
	float operandoDos;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;


	banderaPrimerOperando = 1;
	banderaSegundoOperando = 1;
	banderaCalculos = 1;

	do
	{
		printf(Espaciador);
		printf(MensajeOpcionUno);
		if (banderaPrimerOperando == 1)
		{
			printf("X)\n");
		} else
		{
			printf("%.2f)\n", operandoUno);
		}

		printf(MensajeOpcionDos);
		if (banderaSegundoOperando == 1)
		{
			printf("Y)\n");
		} else
		{
			printf("%.2f)\n", operandoDos);
		}
		printf(MensajeOpcionTres);
		printf(MensajeOpcionCuatro);
		printf(MensajeOpcionCinco);
		printf(Espaciador);
		printf(SolicitarOpcion);
		scanf("%d", &opcion);

		switch (opcion)
		{
			case 1:
				banderaPrimerOperando = PedirFloat(IngresePrimerOperando, IngresoOperandoError,
						                         IngresoOperandoExitoso, &operandoUno);
				break;
			case 2:
				banderaSegundoOperando = PedirFloat(IngreseSegundoOperando, IngresoOperandoError,
						                          IngresoOperandoExitoso, &operandoDos);
				break;
			case 3:
				if (banderaPrimerOperando == 0 && banderaSegundoOperando == 0)
				{
					HacerCalculos(operandoUno, operandoDos, &resultadoSuma, &resultadoResta, &resultadoMultiplicacion,
								  &resultadoDivision, &factorialPrimerNumero, &factoralSegundoNumero);

					printf(CalculosRealizadosCorrectamente);
					banderaCalculos = 0;
				} else
				{
					printf(FaltaIngresarNumeros);
				}
				break;
			case 4:
				if (banderaCalculos == 0)
				{
					MostrarResultados (InformarSuma, InformarResta, InformarMultiplicacion, InformarDivision,
									   InformarErrorDivision, InformarFactorialUno, InformarFactorialDos,
									   resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion,
									   factorialPrimerNumero, factoralSegundoNumero, operandoDos, operandoUno,ErrorEnElFactorial);

					banderaPrimerOperando = 1;
					banderaSegundoOperando = 1;
					banderaCalculos = 0;
				} else
				{
					printf(ErrorCalculosPrimero);
				}
				break;
			case 5:
				printf(FinDelProceso);
		}

	} while(opcion != 5);

	system("cls");

	return EXIT_SUCCESS;
}
