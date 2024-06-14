#include <stdio.h>

int main(){
    int idade = 20;
    int *ponteiroIdade = &idade;

    printf("%d\n", idade);
    printf("%d\n", &idade);
    printf("%d\n", ponteiroIdade);

}