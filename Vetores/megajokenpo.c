#include <stdio.h>

int value(char a[]){
    int b;
    if(a[0] == 'r'){
        b = 0;
    }
    else if(a[0] == 'f'){
        b = 1;
    }
    else if(a[0] == 's'){
        if(a[1] == 'c'){
            b = 2;
        }
        else if(a[1] == 'p'){
            b = 4;
        }
    }
    else if(a[0] == 'h'){
        b = 3;
    }
    else if(a[0] == 'p'){
        b = 5;
    }
    else if(a[0] == 'a'){
        b = 6;
    }
    else if(a[0] == 'w'){
        b = 7;
    }
    else if(a[0] == 'g'){
        b = 8;
    }
    return b;
}
int main(){
    char jog1[10], jog2[10];
    scanf("%s %s", jog1, jog2);
    int x = value(jog1), y = value(jog2), jogo[9] = {0,1,2,3,4,5,6,7,8};
    
    if(x == y){
        printf("empate");
        return 0;
    }
    else{
        for(int i = 0; i < 9; i++){
            if(i == x){
                for(int j = i + 1; j <= i + 4; j++){
                    if(j == y){
                        printf("jog1");
                        return 0;
                    }
                }
            }
        }
    }
    printf("jog2");
    return 0;
}