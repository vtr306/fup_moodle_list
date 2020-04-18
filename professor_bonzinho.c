#include <stdio.h>

int main(){
    
    float a,b,c,d, media;
    
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    if(a<=b && a<=c){
        media = (b + c + d)/3;
    }
    else if(b<=a && b<=c){
        media = (a + c + d)/3;
    }
    else if(c<=a && c<=b){
        media = (a + b + d)/3;
    }
    
    if(media>=7){
        printf("Aprovado com %.1f", media);
    }
    else{
        printf("Final com %.1f", media);
    }
    return 0;
}