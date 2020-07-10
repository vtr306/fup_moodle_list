#include <stdio.h>
#include <limits.h>

int main(){

    int vet[5], i, maior = INT_MIN, menor = INT_MAX;

    for(i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }

    printf("%d", maior + menor);

    return 0;
}