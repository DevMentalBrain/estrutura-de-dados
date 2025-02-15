#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int numeroUsuario = 0;
    int resultadoFatorial = 1;
    clock_t tempoInicial, tempoFinal;
    tempoInicial = clock();
    printf("Informe o numero do fatorial: ");
    scanf("%d", &numeroUsuario);

    //Calcula o fatorial iterativo
    for(int i = numeroUsuario; i > 1; i--){
        resultadoFatorial *= i;
    }

    printf("O fatorial de %d e: %d", numeroUsuario, resultadoFatorial);

    tempoFinal = clock();

    printf("O tempo de execucao em segundos foi: %lf", (double)(tempoFinal - tempoInicial)/CLOCKS_PER_SEC);
    return 0;
}