#include <stdio.h>

int main(){
    int n, escolha, i;
    scanf("%d %d", &n, &escolha);
    int vet[10010];

    for(i = 0; i < n; i++){
        vet[i] = i + 1;
    }
    
    while(n > 1){
        for(int i = escolha; i < n; i++){
            vet[i] = vet[i+1];
        }
        n--;
        escolha = (escolha+1)%n;
    }

    printf("%d", vet[0]);

    return 0;
}