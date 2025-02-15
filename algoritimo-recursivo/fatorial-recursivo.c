#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função recursiva do fatorial
int fatorialRecursivo(int numeroUsuario){
    int resultadoFatorial = 1;
    if(numeroUsuario < 2)//Caso base
        return 1;
    resultadoFatorial = numeroUsuario * fatorialRecursivo(numeroUsuario - 1);//Passo recursivo
    return resultadoFatorial;
}

int main(void){
    int numeroUsuario = 0;
    clock_t tempoInicial, tempoFinal;
    tempoInicial = clock();
    
    printf("Informe qual fatorial deseja: ");
    scanf("%d", &numeroUsuario);
    printf("O resultado e: %d", fatorialRecursivo(numeroUsuario));

    tempoFinal = clock();
    printf("Tempo de execucao em segundos foi: %lf", (double)(tempoFinal - tempoInicial)/CLOCKS_PER_SEC);
    return 0;
}