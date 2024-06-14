#include <stdio.h>

void push(int *numeros, int *head, int size, int valorAdicionar);
void pop(int *numeros, int *head, int size);

int main(){
    
    int numeros[3] = {0,0,0};
    int topo = 0;
    push(numeros, &topo, 3, 10);
    push(numeros, &topo, 3, 20);
    push(numeros, &topo, 3, 30);
    pop(numeros, &topo, 3);
}

//Função pra tirar o último elemento do array
void pop(int *numeros, int *topo, int size){
    //Atribui zero ao ultimo valor da pilha e atualiza o meu topo
    numeros[size-1] = 0;
    *(topo) = *(topo) - 1;
}

//Função pra adicionar um valor no topo do array
void push(int *numeros, int *topo, int size, int valorAdicionar){
    //Verifica se é o primeiro elemento a ser adicionado
    if(numeros[0] == 0){
        numeros[0] = valorAdicionar;
        return;
    }else{
        
        //Caso não seja o primeiro elemento, adiciona no próximo que tiver 0
        for (int i = 0; i < size; i++) {
            if (numeros[i] == 0){
                numeros[i] = valorAdicionar;
                *(topo) = i;
                break;
            }
            
        }
        return;
    }
}
