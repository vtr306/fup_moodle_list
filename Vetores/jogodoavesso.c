#include <stdio.h>

int vet[100010];

int main(){
    int ncasos;
    scanf("%d", &ncasos);
    for(int i = 0; i < ncasos; i++){
        int tam, grito;
        scanf("%d %d", &tam, &grito);

        for(int j = 1; j <= tam; j++){
            scanf("%d", &vet[j]);
        }

        for(int k = 1; k <= tam; k++){
            if(vet[k] == grito){
                vet[k+1]*=-1;
                vet[k-1]*=-1;
            }
        }

        for(int l = 1; l <= tam; l++){
            if(l < tam){
            printf("%d ", vet[l]);
            }
            else printf("%d", vet[l]);
        }
        if(i < ncasos-1){
            printf("\n");
        }        
    }
    return 0;
}