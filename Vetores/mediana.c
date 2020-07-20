#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double vet[n];
    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(vet[j] > vet[j + 1]){
                double aux;
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j + 1] = aux;
            }
        }
    }
    if(n%2 == 1){
        printf("%.1lf", vet[n/2]);
    }
    else if(n%2 == 0){
        double mediana = (vet[n/2] + vet[(n/2) - 1] ) / 2;
        printf("%.1lf", mediana);
    }
    return 0;
}