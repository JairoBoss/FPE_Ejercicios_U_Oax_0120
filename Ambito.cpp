// Ambito.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <stdio.h>

float suma(float, float);
//float gran_total = 0.0;

int main()
{
	float numero1, numero2, resultado;
	char opc, c;
	printf("este programa va a hacer sumas de dos numeros hasta que el usuario decida parar\n");
	do {
		printf("escriba el primer numero: ");
		scanf_s("%f", &numero1);
		//fflush(stdin);
		while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
		printf("escriba el segundo numero: ");
		scanf_s("%f", &numero2);
		//fflush(stdin);
		while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
		resultado = suma(numero1, numero2);
		printf("resultado: %f\n\n",resultado);
		printf("desea sumar otros dos numeros [s/n]");
		scanf_s("%c", &opc, 1);
		while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
		//fflush(stdin);
	} while (opc == 's');
	//printf("El total de la suma de todos los numeros introducidos es: %f\n", gran_total);
}

float suma(float a, float b) {
	static float acumulado_total = 0.0;
	float resultado = a + b;
	acumulado_total = acumulado_total + resultado;
	printf("\nEl acumulado_total es: %f\n", acumulado_total);
	return resultado;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
