#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, contador = 0;
    scanf("%d", &n);
    int vet[n];
    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < n-1; i++){
        int diferenca = (vet[i] - vet[i+1]);
        if(abs(diferenca) > 1){
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}