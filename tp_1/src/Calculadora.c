#include <stdio.h>
#include <stdlib.h>
#include <RJimenez.h>


int main(void) {

	setbuf(stdout, NULL);

	int opcion;
	int operandoUno;
	int operandoDos;

	do
	{
		printf("1. Ingresar 1er operando\n");
		printf("2. Ingresar 2do operando\n");
		printf("3. Calcular todas las operaciones\n");
		printf("4. Informar resultados\n");
		printf("5. Salir");
		printf("\n\n");
		printf("Por favor, ingresar una opcion");
		scanf("%d", &opcion);

		switch (opcion)
		{
			case 1:
				GetOperando()
		}

	} while(opcion != 5);

	return EXIT_SUCCESS;
}
