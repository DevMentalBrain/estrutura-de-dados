int main(void){
    double peso = 68.7;
    double *pointerPeso = &peso; //Para declarar um ponteiro utiliza * antes do nome do ponteiro
    printf("O endereco armazenado no ponteiro e: %p", pointerPeso); //Exibindo o endereço do ponteiro
    return 0;
}