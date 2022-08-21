#include <stdio.h>
#include <stdlib.h>

typedef struct registro{

    int numero;
    struct registro *prox;

}registro;

void inicializa(registro **lista, int rep);
registro *aloca_registro();

int main(){

    int rep, i, a, b;

    printf("\nInforme quantos pares deseja inserir: ");
    scanf("%d", &rep);

    registro *lista[rep*2];

    inicializa(lista, rep*2);

    for(i=0; i<rep; i++){

        printf("\nInforme o par: ");
        scanf("%d %d", &a, &b);

        checa(lista, a, b, rep*2);

    }

    printf("\n");

    return 0;

}

registro *aloca_registro(){

    registro *novo;
    novo = (registro*)malloc(sizeof(registro));
    novo->numero = 0;
    novo->prox = NULL;

    return novo;

}

void inicializa(registro **lista, int rep){

    int i;

    for(i=0; i<rep; i++){

        lista[i]->numero = -1;
        lista[i]->prox = NULL;

    }

}

void checa(registro **lista, int a, int b, int rep){

    int i = 0, check = 0, check2 = 0;

    do{

        if(lista[i]->numero == a){

            check = 1;

        }

        i++;

    }while((lista[i]->numero != a) && (lista[i]->numero != -1));

}
