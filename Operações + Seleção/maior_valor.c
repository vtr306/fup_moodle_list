#include <stdio.h>

int main(){
    
    int x,y,z,w;
    
    scanf("%d %d %d %d", &x, &y, &z, &w);
    
    if(x>=y && x>=z && x>=w){
        printf("%d", x);
    }
    else if(y>=x && y>=z && y>=w){
        printf("%d", y);
    }
    else if(z>=y && z>=x && z>=w){
        printf("%d", z);
    }
    else if(w>=y && w>=z && w>=x){
        printf("%d", w);
    }
    
    return 0;
}