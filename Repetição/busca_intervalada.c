#include <stdio.h>

int main(){
    
    int i, x, y, z, w, aux = 0;
    
    scanf("%d %d %d", &x, &y, &z);
    
    for(i = 0; i < x; i++){
        scanf("%d", &w);
        if(w>=y && w<=z){
            aux++;
        }
    }
    
    printf("%d", aux);
    
    return 0;
}