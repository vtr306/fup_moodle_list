#include <stdio.h>

int main(){
    
    int n1, n2, teste1 = 0, teste2 = 0, vad1 = 0;
    scanf("%d %d", &n1, &n2);
    int vet[n1], rep[n2];
    for(int i = 0; i < n1; i++){
        vet[i] = i+1;
    }
    for(int i = 0; i < n2; i++){
        scanf("%d", &rep[i]);
    }
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(vet[i] == rep[j]){
                vet[i] = 0;
                rep[j] = 0;
                break;
            }
        }
    }
    
    for(int i = 0; i < n2; i++){
        if(rep[i] > 0){
            teste1++;
        }
    }
    
    if(teste1 != 0){
        for(int i = 0; i < n2; i++){
            if(rep[i] > 0){
                vad1++;
                if(vad1 != teste1){
                    printf("%d ", rep[i]);
                }
                else printf("%d\n", rep[i]);
            }
        }
    }
    else printf("N\n");
    
    for(int i = 0; i < n1; i++){
        if(vet[i] > 0){
            teste2++;
        }
    }
    
    if(teste2 != 0){
        for(int i = 0; i < n1; i++){
            if(vet[i] > 0){
                printf("%d ", vet[i]);
            }
        }
    }
    else printf("N\n");
    
    return 0;
}