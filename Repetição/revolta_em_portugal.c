#include <stdio.h>

int main(){
    
    int x, y, i, aux = 0, aux2 = 0;
    
    scanf("%d", &x);
    
    for(i = 0; i < x; i++){
        scanf("%d", &y);
        if(y%2==0){
            aux+=y;
        }
        else if(y%2!=0){
            aux2+=y;
        }
    }
    
    if(aux == aux2){
        printf("empate");
    }
    else if(aux > aux2){
        printf("rebeldes");
    }
    else if(aux2 > aux){
        printf("soldados");
    }
    
    return 0;
}