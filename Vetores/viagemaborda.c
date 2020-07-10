#include <stdio.h>

int main(){
    int n, i, validado = 0;
    float soma = 0, vet[5];
    
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%f", &vet[i]);
        soma += vet[i];
    }

    for(i = 0; i < n; i++){
        if(vet[i] > soma/n ){
            validado++;
        }
    }
    
    printf("%d", validado);

    return 0;
}