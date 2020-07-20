#include <stdio.h>

int main(){
    int n, casais = 0;
    scanf("%d", &n);
    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vet[i] == vet[j]*-1 && vet[i] != 0){
                vet[i] = 0;
                vet[j] = 0;
                casais++;
                break;
            }
        }
    }
    printf("%d", casais);
    return 0;
}