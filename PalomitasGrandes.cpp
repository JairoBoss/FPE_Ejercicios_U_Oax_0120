// PalomitasGrandes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main()
{
	int pmpg, mad;
	printf("Dame el numero de mes en el que se compraron Palomitas Grandes: [1-4]");
	scanf_s("%d", &pmpg);
	printf("Dame el numero de mes que deseas determinar que se compra: [1-12]");
	scanf_s("%d", &mad);

	while (mad <= pmpg)
	{
		mad = mad + 4; //Cada 4 meses sucede exactamente lo mismo
	}
	if (((mad - pmpg) % 4) == 0)
	{
		printf("Palomitas Grandes\n");
	}
	else if (((mad - pmpg) % 4) == 2)
	{
		printf("Palomitas Medianas\n");
	}
	else
	{
		printf("Nada\n");
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
