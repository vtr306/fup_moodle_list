#include <stdio.h>

double mediacalc(double vet[], int denominador){
    int j;
    double soma = 0, media;
    for(j = 0; j < denominador; j++){
        soma+=vet[j];
    }
    media = soma/denominador;
    return media;
}

int main(){
    int n, i;
    scanf("%d", &n);
    double vet[n], media;
    for(i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }
    media = mediacalc(vet, n);
    printf("%.2lf\n", media);
    for(i = 0; i < n; i++){
        if(vet[i] > media){
            printf("G ");
        }
        else if(vet[i] == media){
            printf("M ");
        }
        else printf("P ");
    }
    return 0;
}