#include <stdio.h>

int main(){
    
    int x,y,z;
    
    scanf("%d %d %d", &x, &y, &z);
    
    if(x==y && y==z){
        printf("empate");
    }
    else if(x==y && y!=z){
        printf("jog3");
    }
    else if(x==z && y!=z){
        printf("jog2");
    }
    else if(z==y && y!=x){
        printf("jog1");
    }
    
    return 0;
}