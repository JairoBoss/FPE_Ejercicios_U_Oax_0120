// NumerosPrimos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
	int limite;
	char c;

	//Mensaje para el usuario
	printf("¿Hasta que número deseas calcular los numeros primos?\n");
	scanf_s("%d", &limite);
	while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
	printf("los numeros primos entre 2 y %d son:\n", limite);

	int contador;
	for (contador = 2; contador <= limite; contador++)
	{
		int contador1, es_primo = 1;
		for (contador1 = 2; contador1 < contador; contador1++)
		{
			if (contador % contador1 == 0)
			{
				es_primo = 0;
				//break;
			}
		}
		if (es_primo)
			printf("%d, ", contador);
		//else
		//	printf("\nnumero %d no es primo", contador);
	}
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
