#include <stdio.h>

int main(){
    
    int x,y,z;
    
    scanf("%d %d %d", &x, &y, &z);
    
    if(x==y&&x==z){
        printf("3");
    }
    else if((x==y&&x!=z)||(x==z&&x!=y)||(y==z&&x!=y)){
        printf("2");
    }
    else{
        printf("0");
    }
    
    
    return 0;
}