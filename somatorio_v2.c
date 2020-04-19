#include <stdio.h>

int main(){

    int i, x, y, soma = 0;

    scanf("%d %d", &x, &y);

    if(y<x){
        printf("invalido");
    }
    else{
        for(i = x; i <= y; i++){
            if(i%3==0 && i%2==0){
                soma+= i;
            }
        }
        printf("%d", soma);
    }

    return 0;
}