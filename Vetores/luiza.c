#include <stdio.h>
#include <math.h>

int main(){

    int n, numero = 0;
    scanf("%d", &n);
    int vet[n], potencia = n-1;
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < n; i++){
        numero += vet[i]*pow(10,potencia);
        potencia--;
    }
    printf("%d\n", numero);
    return 0;
}