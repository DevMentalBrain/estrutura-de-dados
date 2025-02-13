#include <stdio.h>
#include <stdlib.h>

int somarArray(int *array){
    int soma = 0;
    
    //somando cada numero do array
    for(int i = 0; i < 5; i++){
		soma += *(array + i);
	}

    return soma;
}

int main(void){
	int *array;
	array = (int*) malloc(5 * sizeof(int));

    printf("Bem vindo(a) ao Somador!\n Informe 5 numeros e veja a soma deles!");
	
    //receber numeros do usuario
	for(int i = 0; i < 5; i++){
        printf("\nInforme o %d numero: ", i + 1);
        scanf("%d", &*(array + i));
	}

    printf("A soma dos elementos e: %d", somarArray(array));
    
    //desalocar a memória
    for(int i = 0; i < 5; i++){
		free(array + i);
	}
	return 0;
}