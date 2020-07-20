#include <stdio.h>

int main(){
    int n, maior = 1, aux = 1;
    scanf("%d", &n);
    int vet[n+1];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }    
    for(int i = 1; i <= n; i++){
        if(vet[i] == vet[i-1]){
            aux++;
        }
        else if(vet[i] != vet[i-1]){
            if(aux > maior){
                maior = aux;
            }
            aux = 1;
        }
    }
    aux = 1;
    for(int i = 1; i <= n; i++){
        if(vet[i] == vet[i-1]){
            aux++;
        }
        else if(vet[i] != vet[i-1]){
            if(aux == maior){
                printf("%d ", vet[i-1]);
            }
            aux = 1;
        }
    }
    return 0;
}