#include <stdio.h>
 
int vet[10010];
 
int main(){

    int n, contador = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 1; i <= n; i++){
        if(vet[i] == 0){
            if(vet[i+1] == 0 && vet[i-1] == 0){
                contador++;
            }
        }
    }
    printf("%d", contador);
    return 0;
}