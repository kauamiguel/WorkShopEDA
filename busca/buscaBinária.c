#include <stdio.h>

int binarySearch(int vet[], int value, int left, int right){
    int mid;

    mid = (left + right) / 2;

    if(vet[mid] == value){
        return vet[mid];
    }else if (value < vet[mid]){
        return binarySearch(vet, value, left, mid - 1);
    }else{
        return binarySearch(vet, value, mid + 1, right);
    }
}


int main(){
    int numeros[] = {1,2,3,4,5,6,7,8};
    int valorRetornado = binarySearch(numeros, 1, 0, 8);
    printf("%d\n", valorRetornado);
}
