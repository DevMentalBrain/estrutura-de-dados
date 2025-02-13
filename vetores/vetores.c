int main(void){
    int *v;
    v = malloc(10 * sizeof(int));//Aloca em v o endereço do primeiro elemento do vetor
    printf("Endereco da primeira posicao e: %p", v);
    free(v);//Desalocar a memória que foi alocada no v
    return 0;
}