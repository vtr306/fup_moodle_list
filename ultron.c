#include <stdio.h>

int main(){
    
    int a, b, i, aux = 0, aux2;
    
    scanf("%d %d", &a, &b);
    
    for(i = 0; i < b; i++){
        scanf("%d", &aux2);
        if(aux2 == a){
            aux++;
        }
    }
    
    printf("%d", aux);
    
    return 0;
}