// MultiplicaMatrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Author: Tino
// Programa que pide al usuario ingresar los valores de 2 matrices de 3x3 y posteriormente las multiplica
#include <stdio.h>

const int FILAS = 2, COLUMNAS = 2;

void imprime_matriz(int mat[FILAS][COLUMNAS])
{
	int fila, columna;
	for (fila = 0; fila < FILAS; fila = fila + 1)
	{
		for (columna = 0; columna < COLUMNAS; columna = columna + 1)
		{
			printf("\t%d", mat[fila][columna]);
		}
		printf("\n");
	}
}

void captura_matriz(int mat[FILAS][COLUMNAS])
{
	int fila, columna;
	for (fila = 0; fila < FILAS; fila = fila + 1)
	{
		for (columna = 0; columna < COLUMNAS; columna = columna + 1)
		{
			printf("Valor de la posicion (%d, %d):", fila + 1, columna + 1);
			scanf_s("%d", &mat[fila][columna]);
		}
	}
}

int multiplica_matrices(int mat1[FILAS][COLUMNAS], int mat2[FILAS][COLUMNAS], int matR[FILAS][COLUMNAS])
{
	int fila, columna, elemento;
	for (fila = 0; fila < FILAS; fila = fila + 1)
	{
		for (columna = 0; columna < COLUMNAS; columna = columna + 1)
		{
			matR[fila][columna] = 0;
			for (elemento = 0; elemento < COLUMNAS; elemento = elemento + 1)
			{
				/*El elemento m, n de la matriz resultado es igual a la sumatoria de los productos de multiplicar
				  la fila m de la matriz 1 por la columna n de la matriz 2 */ 
				matR[fila][columna] = matR[fila][columna] + (mat1[fila][elemento] * mat2[elemento][columna]);
			}
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int fila, columna;
	int matrizA[FILAS][COLUMNAS], matrizB[FILAS][COLUMNAS], matrizResultado[FILAS][COLUMNAS];

	printf("Este programa multiplica 2 matrices de %dx%d.\nIngrese los valores requeridos.\n", FILAS, COLUMNAS);
	//Capturar matrices
	printf("Matriz 1\n");
	captura_matriz(matrizA);
	printf("Matriz 2\n");
	captura_matriz(matrizB);
	
	//Imprimir matrices
	printf("Matriz 1\n");
	imprime_matriz(matrizA);
	printf("Matriz 2\n");
	imprime_matriz(matrizB);

	//Realizar la operación
	multiplica_matrices(matrizA, matrizB, matrizResultado);

	//Imprimir resultado
	printf("Matriz Resultado\n");
	imprime_matriz(matrizResultado);

	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
