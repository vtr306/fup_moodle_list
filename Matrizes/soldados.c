#include <stdio.h>

int main(){
    int matriz[3][3], maior = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 1; j < 3; j++){
            if(matriz[j][i] < matriz[j-1][i]){
                maior++;
            }
        }
    }

    printf("%d", maior);
    return 0;
}