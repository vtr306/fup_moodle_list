#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    int vet[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    for(i = n-1 ; i >= 0; i--){
        printf("%d ", vet[i]);
    }

    return 0;
}