#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define filas 5
#define columnas 12
void mostrarMin(int *vMin);
void mostrarMin(int *vMax);

int main()
{
    
    int simulation[filas][columnas];
    int vMax[3] = {0,0,10000};
    int vMin[3] = {0,0,50000};
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

    //valor mas grande
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            
            if(vMin[2] > simulation[i][j]){
                vMin[2] = simulation[i][j];
                vMin[0] = i;
                vMin[1] = j;
            }
            if(vMax[2] < simulation[i][j]){
                vMax[2] = simulation[i][j];
                vMax[0] = i;
                vMax[1] = j;
            }
        }
        
    }
    //Mostras el min y el max
    printf("\n");
    mostrarMin(vMin);
    mostrarMin(vMax);

    return 0;
}

void mostrarMin(int *vMin){
        switch (vMin[0])
        {
        case  0:
            printf("2024 ");
            break;
            case 1:
            printf("2025 ");
            break;
            case 2:
            printf("2026 ");
            break;
            case 3:
            printf("2027 ");
            break;
            case 4:
            printf("2028 ");
            break;
        default:
            break;
        }
        switch (vMin[1])
        {
        case  0:
            printf("Enero_");
            break;
            case 1:
            printf("Febrero_");
            break;
            case 2:
            printf("Marzo_");
            break;
            case 3:
            printf("Abril_");
            break;
            case 4:
            printf("Mayo_");
            break;
            case 5:
            printf("Junio_");
            break;
            case 6:
            printf("Julio_");
            break;
            case 7:
            printf("Agosto_");
            break;
            case 8:
            printf("Septiembre_");
            break;
            case 9:
            printf("Octubre_");
            break;
            case 10:
            printf("Noviembre_");
            break;
            case 11:
            printf("Diciembre_");
            break;
        default:
            break;
        }
        printf(" %d ", vMin[2]);
        printf("\n");
};
void mostrarMax(int *vMax){
    switch (vMax[0])
        {
        case  0:
            printf("2024 ");
            break;
            case 1:
            printf("2025 ");
            break;
            case 2:
            printf("2026 ");
            break;
            case 3:
            printf("2027 ");
            break;
            case 4:
            printf("2028 ");
            break;
        default:
            break;
        }
        switch (vMax[1])
        {
        case  0:
            printf("Enero_");
            break;
            case 1:
            printf("Febrero_");
            break;
            case 2:
            printf("Marzo_");
            break;
            case 3:
            printf("Abril_");
            break;
            case 4:
            printf("Mayo_");
            break;
            case 5:
            printf("Junio_");
            break;
            case 6:
            printf("Julio_");
            break;
            case 7:
            printf("Agosto_");
            break;
            case 8:
            printf("Septiembre_");
            break;
            case 9:
            printf("Octubre_");
            break;
            case 10:
            printf("Noviembre_");
            break;
            case 11:
            printf("Diciembre_");
            break;
        default:
            break;
        }
        printf(" %d ", vMax[2]);
        printf("\n");
};