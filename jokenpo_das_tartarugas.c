#include <stdio.h>

int main(){
    
    char x,y;
    
    scanf("%c %c", &x, &y);
    
    if(x == y){
        printf("empate");
    }
    else if(x == 'R' && y == 'S' ){
        printf("jog1");
    }
    else if(x == 'R' && y == 'P' ){
        printf("jog2");
    }
    else if(x == 'S' && y == 'P' ){
        printf("jog1");
    }
    else if(x == 'S' && y == 'R' ){
        printf("jog2");
    }
    else if(x == 'P' && y == 'R' ){
        printf("jog1");
    }
    else if(x == 'P' && y == 'S' ){
        printf("jog2");
    }
    
    return 0;
}