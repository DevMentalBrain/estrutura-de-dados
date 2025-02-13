#include <stdio.h>
#include <stdlib.h>

//função que faz o swap entre 2 numeros
void swap(int *numero1, int *numero2){
    int chave = *numero1;
    *numero1 = *numero2;
    *numero2 = chave;
}

//função que ordena um array com o algoritimo bubleSort
void bubleSort(int *vetor, int tamanhoVetor){
    for(int i = tamanhoVetor - 1; i > 0; i--){
        printf("\nIteracao %d: ", i);
        for(int j = 0; j < i; j++){
            if(*(vetor + j) > *(vetor + j + 1)){
                swap((vetor + j), (vetor + j + 1));
            }
        }
    }
}

int main(void){
    int *array;
    int tamanhoVetor;

    //entrada de dados (usuario informa o tamanho do array)
    printf("Quantos numeros deseja guardar: ");
    scanf("%d", &tamanhoVetor);
    array = (int*) malloc(tamanhoVetor * sizeof(int));

    //entrada de dados (usuario informa cada numero do array)
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &*(array + i));
    }

    //saida de dados (imprime array como usuario informou)
    printf("Sequencia de numeros informada: ");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("[%d] ", *(array + i));
    }

    bubleSort(array, tamanhoVetor);

    //saida de dados (imprime o array ordenado)
    printf("\nSequencia ordenada: ");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("[%d] ", *(array + i));
    }

    free(array);
    return 0;
}