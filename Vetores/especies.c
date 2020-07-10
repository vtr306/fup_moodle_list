#include <stdio.h>

int main(){
    int n,i, contador = 0;
    scanf("%d", &n);
    int vet[n], especie[10];
    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        especie[vet[i]] = 1;
    }
    for(i = 1; i <= 9; i++){
        if(especie[i] == 1){
            contador++;
        }
    }
    printf("%d", contador);
    
    return 0;
}