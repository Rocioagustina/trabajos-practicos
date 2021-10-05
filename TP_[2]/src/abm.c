
#include <stdio.h>
#include <stdlib.h>


#define BIENVENIDA "BIENVENIDO AL ABM DE EMPLEADOS\n"
#define MENSAJE_OPCION_UNO "1.ALTAS\n"
#define MENSAJE_OPCION_DOS "2.MODIFICAR\n"
#define MENSAJE_OPCION_TRES "3.BAJA\n"
#define MENSAJE_OPCION_CUATRO "4.INFORMAR\n"
#define MENSAJE_OPCION_CINCO "5.SALIR\n"
#define MENSAJE_INGRESAR_OPCION "INGRESE UNA OPCION: "


int main(void) {

	setbuf(stdout, NULL);
	int opcion;

	printf(BIENVENIDA);
	printf(MENSAJE_OPCION_UNO);
	printf(MENSAJE_OPCION_DOS);
	printf(MENSAJE_OPCION_TRES);
	printf(MENSAJE_OPCION_CUATRO);
	printf(MENSAJE_OPCION_CINCO);
	printf(MENSAJE_INGRESAR_OPCION);
	scanf("%d", &opcion);



	return EXIT_SUCCESS;
}
