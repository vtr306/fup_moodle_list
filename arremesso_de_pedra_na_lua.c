#include <stdio.h>

int main (){
    
    int i, x, y, z, aux = 2147483647, aux2 = 0;
    
    scanf("%d", &x);
    
    for(i = 0; i < x; i++){
        scanf("%d %d", &y, &z);
        if(y<10 || z<10){
            
        }
        else{
            if(y > z){
                if((y - z) <= aux){
                    aux = y - z;
                    aux2 = i;
                }
            }
            if(y < z){
                if((z - y) <= aux){
                    aux = z - y;
                    aux2 = i;
                }
            }
        }
    }
        
        if(aux2 == 0){
            printf("sem ganhador");
        }
        else{
            printf("%d", aux2);
        }
    
    
    return 0;
}