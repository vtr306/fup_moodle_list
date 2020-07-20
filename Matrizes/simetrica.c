#include <stdio.h>

int main(){
    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    if(matriz[0][1] == matriz[1][0] && matriz[0][2] == matriz[2][0] && matriz[1][2] == matriz[2][1]){
        printf("sim");
    }
    else printf("nao");

    return 0;
}