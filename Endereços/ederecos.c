int main(void){
    int idade = 10;
    int *i = &idade; //& atribui o endereço da variavel idade ao ponteiro i
    printf("Endereco de idade e: %p", i);
    return 0;
}