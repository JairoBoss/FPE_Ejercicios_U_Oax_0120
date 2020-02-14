// Dado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
const int LADOS = 12;

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char opc, c;
    srand(time(0));
    printf("Este programa simula la acción de tirar un dado\n");
    do
    {
        printf("\n\nTirando el dado...\n");
        printf("El dado cayo en: %d\n", (rand() % LADOS) + 1);
        printf("Otro tiro? [s/n]");
        scanf_s("%c", &opc, 1);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    } while (opc != 'n');
    printf("Adios\n");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
