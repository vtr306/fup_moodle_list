#include <stdio.h>

int quadrado[3][3];

int main(){
    int soma = 0, vad = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &quadrado[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        soma+= quadrado[i][i];
        vad += quadrado[i][2-i];
    }
    
    if(vad != soma){
        printf("nao");
        return 0;
    }
    
    for(int i = 0; i < 3; i++){
        vad = 0;
        for(int j = 0; j < 3; j++){
            vad += quadrado[i][j];
        }
        if(vad != soma){
            printf("nao");
        return 0;
        }
    }
    for(int i = 0; i < 3; i++){
        vad = 0;
        for(int j = 0; j < 3; j++){
            vad += quadrado[j][i];
        }
        if(vad != soma){
            printf("nao");
        return 0;
        }
    }
    
    printf("sim");
    return 0;
}