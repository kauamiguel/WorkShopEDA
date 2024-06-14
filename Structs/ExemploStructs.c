#include <stdio.h>

typedef struct Pessoa{
    int idade;
    float saldo;
}pessoa;

int main(){
    
    pessoa kaua;
    kaua.idade = 20;
    kaua.saldo = -100.0;
    printf("%d\n", kaua.idade);
    printf("%.2f\n", kaua.saldo);
}