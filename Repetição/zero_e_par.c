#include <stdio.h>

int main(){
    
    int x,y,i, soma = 0;
    
    scanf("%d %d", &x, &y);
    
    if(x > y){
        printf("invalido");
    }
    else{
        for(i = x; i <= y; i++){
            if(i%2==0){
                soma+=i;
            }
        }
        
        printf("%d", soma);
    }
    return 0;
}