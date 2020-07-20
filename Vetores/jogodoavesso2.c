#include <stdio.h>

int vet[100010];

int main(){
    int ngente, ngrito;
    scanf("%d %d", &ngente, &ngrito);
    int grito[ngrito];
    for(int i = 1; i <= ngente; i++){
        scanf("%d", &vet[i]);
    }
    for(int k = 0; k < ngrito; k++){
        scanf("%d", &grito[k]);
        for(int i = 1; i <= ngente; i++){
            if(vet[i] == grito[k] || vet[i] == grito[k]*-1){
                vet[i+1]*= -1;
                vet[i-1]*= -1;
            }
        }
    }
    for(int i = 1; i <= ngente; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}