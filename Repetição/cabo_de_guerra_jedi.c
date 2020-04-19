#include <stdio.h>

int main(){
    
    int x,y,z,aux = 0, aux2 = 0, i;
    
    scanf("%d", &x);
    
    z = x/2;
    
    for(i = 0; i < z; i++){
        scanf("%d", &y);
        aux+=y;
    }
    
    for(i = z; i < x; i++){
        scanf("%d", &y);
        aux2+=y;
    }
    
    if(aux == aux2){
        printf("Empate");
    }
    else if(aux > aux2){
        printf("Jedi");
    }
    else if(aux2 > aux){
        printf("Sith");
    }
    return 0;
}