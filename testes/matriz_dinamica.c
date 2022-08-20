#include <stdio.h>
#include <stdlib.h>

int main(){

    int **matriz, i, j, num;

    printf("\n informe o tamanho da matriz quadrada que deseja: ");
    scanf("%d", &num);

    matriz = malloc(num * sizeof(int));

    for(i=0; i < num; i++){

        matriz[i] = malloc(num * sizeof(int));

    }

    for(i=0; i < num; i++){

        for(j=0; j < num; j++){

            matriz[i][j] = 0;

        }

    }

    for(i=0; i < num; i++){

        for(j=0; j < num; j++){

            printf("%d  ", matriz[i][j]);

        }

        printf("\n");

    }

    printf("\n");

    return 0;

}