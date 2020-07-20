#include <stdio.h>

int main(){

    int vetor[6], matriz[4][4], rep = 0;
    for(int  i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            for(int l = 0; l < 4; l++){
                if(matriz[j][l] == vetor[i]){
                    rep++;
                }
            }
        }
    }
    printf("%d", rep);
    
    return 0;
}