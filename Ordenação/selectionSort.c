#include <stdio.h>

void selectionSort(int numeros[], int tamanho){
    int menorValor;
    for(int i = 0; i < tamanho - 1; i++){
        menorValor = i;

        for(int j = i + 1; j < tamanho; j++){ 
            if(numeros[j] < numeros[menorValor]){
               menorValor = j;
            }
        }

        int aux = numeros[i];
        numeros[i] = numeros[menorValor];
        numeros[menorValor] = aux;
    }
}

int main(){
    int numeros[] = {4,3,2,1};
    selectionSort(numeros, 4);

    for(int i = 0; i < 4; i++){
        printf("%d\n", numeros[i]);
    }
}
