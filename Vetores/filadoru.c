#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    int vet[n];
    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        if(vet[i]%2 == 1){
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
    for(i = 0; i < n; i++){
        if(vet[i]%2 == 0){
            printf("%d ", vet[i]);
        }
    }
    return 0;
}