#include <stdio.h>

int main(){
    
    int i, x, aux = 30;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &x);
        if(x <= aux){
            aux = x;
        }
    }
    
    printf("%d", aux);
    
    
    return 0;
}