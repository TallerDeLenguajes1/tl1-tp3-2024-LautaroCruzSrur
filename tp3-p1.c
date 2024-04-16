#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int simulation[5][12];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            simulation[i][j]=10000 + rand() % (50000 - 10000 + 1);
        }
    }
    for (int i = 0; i < 5; i++)
    { 
        for (int j = 0; j < 12; j++)
        {
            printf("%d - ",simulation[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}