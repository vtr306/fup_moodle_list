#include <stdio.h>

int main(){
    
    int a,b;
    float x,y;
    
    scanf("%d %d", &a, &b);
      
    x = a;
    y = b;
    
  
    if(b==0){
        printf("%.0f %.0f %0.f\nimpossivel dividir por zero", x+y, x-y, x*y);
    }
    else if(b!=0){
        printf("%.0f %.0f %0.f %.2f %d", x+y, x-y, x*y, x/y, a%b);

    }
        
        
    
    
    return 0;
}