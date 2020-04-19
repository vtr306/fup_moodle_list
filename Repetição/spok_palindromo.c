#include <stdio.h>
#include <math.h>

int main (){
    
    int a,b, c, d = 0, soma = 0, teste;
    
    scanf("%d", &b);
    teste = b;
    a = b;
    
    while(b != 0){
        
        c = b%10;
        b = b/10;
        
        d++;
    }
    
        while(a != 0){
        
        c = a%10;
        a = a/10;
        
        soma += (c * pow(10, d - 1));
        
        d--;
    }
    
    if(soma == teste){
        printf("1");
    }
    else{
        printf("0");
    }
    
    
    return 0;
}