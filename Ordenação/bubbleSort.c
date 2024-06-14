#include <stdio.h>

void sort(int numeros[], int tamanho){
    int aux;

    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 1; j < tamanho - i; j++){
            if(numeros[j-1] > numeros[j]){
                //Algoritmo para fazer a troca de valores entre o menor e o maior
                aux = numeros[j];
                numeros[j] = numeros[j-1];
                numeros[j-1] = aux;
            }
        } 
    }
}

int main(){
    int numeros[] = {4,3,2,1};
    sort(numeros, 4);
}
