#include <stdio.h>
#include <math.h>

int main(){
    
    float a,b,c, delta;
    
    scanf("%f %f %f", &a, &b, &c);
    
    delta = sqrt((b*b) - (4*a*c));
    
    if(delta > 0){
        printf("%.2f\n%.2f", (-b + delta)/(2*a), (-b - delta)/(2*a));
    }
    else if(delta == 0){
        if(b==0 && c==0){
            printf("%.2f", b/(2*a));
        }
        else{
        printf("%.2f", (-b)/(2*a));
        }
    }
    else{
        printf("nao ha raiz real");
    }
    
    
    return 0;
}