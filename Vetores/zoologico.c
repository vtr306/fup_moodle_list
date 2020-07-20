#include <stdio.h>

int especies[100010];

int main(){
    int n;
    scanf("%d", &n);
    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < n; i++){
        especies[vet[i]]++;
    }
    for(int i = 1; i < 50; i++){
        if(especies[i] != 0 ){
            printf("%d ", i);
        }
    }
    return 0;
}