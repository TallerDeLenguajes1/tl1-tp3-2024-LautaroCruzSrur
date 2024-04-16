#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define filas 5
#define columnas 12

int main()
{
    
    int simulation[filas][columnas];
    float promedioXano[filas];
    int aux = 0;
    srand(time(NULL));
    // Aleatorio
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            simulation[i][j] = 10000 + rand() % (50000 - 10000 + 1);
        }
    }
    //
    // Mostrar Aleatorios
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d - ", simulation[i][j]);
        }
        printf("\n");
    }
    //
    // Armar promedio
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            
                 promedioXano[i] = promedioXano[i] + simulation[i][j];
        }
    }
    for (int i = 0; i < filas; i++)
    {
        promedioXano[i] = promedioXano[i] / 12;
    }
    
    // Mostrar promedio
    for (int k = 0; k < filas; k++)
    {
        if( k < 1)
        {
            printf("Promedio por año: %.2f ", promedioXano[k]);
        }
        printf(" %.2f ", promedioXano[k]);
    }

    return 0;
}