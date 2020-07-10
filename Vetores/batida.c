#include <stdio.h>

int main(){
    int n, i, j, aux;
    
    scanf("%d", &n);
    
    int vet[n];
    
    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(vet[j] > vet[j+1]){
            aux = vet[j];
            vet[j] = vet[j+1];
            vet[j + 1] = aux;
            }
        }
    }
    
    for(i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}