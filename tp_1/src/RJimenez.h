/*
 * RJimenez.h
 *
 *  Created on: 20 sep. 2021
 *      Author: rocio
 */

#ifndef RJIMENEZ_H_
#define RJIMENEZ_H_

#define TAM_STR 256
#define TAM_INT 20

/// @fn int PedirFloat(char[], char[], char[], float*)
/// @brief Funcion para pedir un numero flotante.
///
/// @param mensaje El texto que se muestra para pedir el numero flotante.
/// @param mensajeError El texto que se muestra cuando no se obtiene el tipo de dato correcto.
/// @param mensajeExitoso El texto que se muestra cuando se obtiene el tipo de dato correcto.
/// @param operando El puntero donde se guarda el numero validado y casteado.
/// @return 0 si pudo obtener el numero flotante, 1 si no pudo.
int PedirFloat(char mensaje [TAM_STR], char mensajeError [TAM_STR], char mensajeExitoso [TAM_STR], float *operando);


/// @fn int ValidarInt(char[])
/// @brief Funcion para validar un numero entero.
///
/// @param operando Recibe un array de caracteres y valida si es un numero entero.
/// @return 0 si es un numero entero, 1 si no lo es.
int ValidarInt(char operando [20]);


/// @fn int ValidarFloat(char[])
/// @brief Funcion para validar un numero flotante.
///
/// @param operando Recibe un array de caracteres y valida si es un numero flotante.
/// @return 0 si es un numero flotante, 1 si no lo es.
int ValidarFloat (char operando [20]);


/// @fn void HacerCalculos(float, float, float*, float*, float*, float*, int*, int*)
/// @brief Funcion que realiza todos los calculos solicitados.
///
/// @param primerOperando Primero numero ingresado por el usuario.
/// @param segundoOperando Segundo numero ingresado por el usuario.
/// @param resultadoSuma El puntero donde se guarda el resultado de la suma.
/// @param resultadoResta El puntero donde se guarda el resultado de la resta.
/// @param resultadoMultiplicacion El puntero donde se guarda el resultado de la multiplicacion.
/// @param resultadoDivision El puntero donde se guarda el resultado de la division.
/// @param resultadoFactorialPrimerNumero El puntero donde se guarda el factorial del primer numero ingresado.
/// @param resultadoFactorialSegundoNumero El puntero donde se guarda el factorial del segundo numero ingresado.
void HacerCalculos(float primerOperando, float segundoOperando, float *resultadoSuma, float *resultadoResta, float *resultadoMultiplicacion, float *resultadoDivision, int *resultadoFactorialPrimerNumero, int *resultadoFactorialSegundoNumero);


/// @fn float SumaCalculadora(float, float)
/// @brief Funcion que realiza la suma entre el primer y el segundo numero ingresado.
///
/// @param primerOperando Primero numero ingresado.
/// @param segundoOperando Segundo numero ingresado.
/// @return El resultado de la suma entre los dos numeros ingresados.
float SumaCalculadora (float primerOperando, float segundoOperando);


/// @fn float RestaCalculadora(float, float)
/// @brief Funcion que realiza la resta entre el primer y el segundo numero ingresado.
///
/// @param primerOperando Primer numero ingresado.
/// @param segundoOperando Segundo numero ingresado.
/// @return El resultado de la resta entre los dos numeros ingresados.
float RestaCalculadora (float primerOperando, float segundoOperando);


/// @fn float MultiplicacionCalculadora(float, float)
/// @brief Funcion que realiza la multiplicacion entre el primer y el segundo numero ingresado.
///
/// @param primerOperando Primer numero ingresado.
/// @param segundoOperando Segundo numero ingresado.
/// @return El resultado de la multiplicacion entre los dos numeros ingresados.
float MultiplicacionCalculadora (float primerOperando, float segundoOperando);


/// @fn float DivisionCalculadora(float, float)
/// @brief Funcion que realiza la division entre el primer numero y el segundo numero ingresado.
///
/// @param primerOperando Primero numero ingresado.
/// @param segundoOperando Segundo numero ingresado.
/// @return El resultado de la division entre los dos numeros ingresados.
float DivisionCalculadora (float primerOperando, float segundoOperando);


/// @fn int Factorial(float)
/// @brief Funcion que realiza el factorial de un numero entero positivo.
///
/// @param operando Recibe un numero entero positivo y realiza el factorial.
/// @return El resultado del factorial.
int Factorial (float operando);


/// @fn void MostrarResultados(char[], char[], char[], char[], char[], char[], char[], float, float, float, float, int, int, float)
/// @brief Funcion que muestra mensajes con los resultados de los calculos solicitados.
///
/// @param mensajeSuma El texto que muestra el resultado de la suma.
/// @param mensajeResta El texto que muestra el resultado de la resta.
/// @param mensajeMultiplicacion El texto que muestra el resultado de la multiplicacion.
/// @param mensajeDivision El texto que muestra el resultado de la division.
/// @param mensajeDivisionError El texto que muestra cuando se intenta dividir algun numero por 0.
/// @param mensajeFactorialUno El texto que muestra el resultado del factorial del primer numero ingresado.
/// @param mensajeFactorialDos El texto que muestra el resultado del factorial del segundo numero ingresado.
/// @param resultadoSuma El resultado de la suma que luego mostrara "mensajeSuma".
/// @param resultadoResta El resultado de la resta que luego mostrara "mensajeResta".
/// @param resultadoDivision El resultado de la division que luego mostrara "mensajeDivision".
/// @param resultadoMultiplicacion El resultado de la multiplicacion que luego mostrara "mensajeMultiplicacion".
/// @param resultadoFactorialUno El resultado del factorial del primer numero ingresado que luego mostrara "mensajeFactorialUno".
/// @param resultadoFactorialDos El resultado del factorial del segundo numero ingresado que luego mostrara "mensajeFactorialDos".
/// @param operandoDos Segundo numero ingresado, utilizado para validar que no haya division por 0 o numero factorial negativo.
/// @param operandoUno Primer numero ingresado, utilizado para validar que no haya numero factorial negativo.
/// @param errorEnElFactorial El texto que muestra cuando se intenta hacer el factorial de un numero negativo.
void MostrarResultados (char mensajeSuma [TAM_STR], char mensajeResta [TAM_STR], char mensajeMultiplicacion [TAM_STR], char mensajeDivision [TAM_STR], char mensajeDivisionError [TAM_STR], char mensajeFactorialUno [TAM_STR], char mensajeFactorialDos [TAM_STR], float resultadoSuma, float resultadoResta, float resultadoDivision, float resultadoMultiplicacion, int resultadoFactorialUno, int resultadoFactorialDos, float operandoDos, float operandoUno, char errorEnElFactorial [TAM_STR]);
#endif /* RJIMENEZ_H_ */
