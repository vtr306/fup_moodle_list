#include <stdio.h>

int main(){
    int x,y;
    char c;
    
    scanf("%d %d %c", &x, &y, &c);
    
    if(c == '+'){
        printf("%d", x+y);
    }
    else if(c == '-'){
        printf("%d", x-y);
    }
    else if(c == '*'){
        printf("%d", x*y);
    }
    else if(c == '/'){
        if(y == 0){
            printf("invalida");
        }
        else{
        printf("%d", x/y);
        }
    }
    
    
}