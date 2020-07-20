#include <stdio.h>

int main(){
    
    int matriz[5][5], soma1 = 0, soma2 = 0, x = 4;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 5; i++){
        soma1 += matriz[i][i];
    }
    for(int i = 0; i < 5; i++){
        soma2 += matriz[i][x];
        x--;
    }
    
    printf("%d", soma1 - soma2);
    return 0;
}