#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[3][3] = {{8.7, 4.2, 2.1}, {4.1, 3.2, 8.0}, {10.0, 8.8, 9.1}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\n", &notas[i][j]);
        }
    }
}