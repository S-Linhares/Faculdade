#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tam, i=0, a, b, j=0, matriz[99][99], maior = 0;
	
	printf("\n Informe quantos pares deseja inserir: ");
	scanf("%d", &tam);
	
	for(i=0; i<99; i++){
		
		for(j=0; j<99; j++){
			
			matriz[i][j] = 0;
			
		}
		
	}
	
	for(i=0; i<tam; i++){
		
		printf("\n informe o par (numeros de 0 a 99): ");
		scanf("%d %d", &a, &b);
		
		matriz[a][b] = 1;
		matriz[b][a] = 1;
		
		if(a > maior){
			
			maior = a;
			
		}
		
		if(b > maior){
			
			maior = b;
			
		}
		
	}
	
	printf("\n");
	
	for(i=0; i<maior+1; i++){
		
		for(j=0; j<maior+1; j++){
			
			printf("%d  ", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	printf("\n");
	
	return 0;
	
}