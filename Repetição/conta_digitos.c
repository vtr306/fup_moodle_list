#include <stdio.h>

int main(){
    
    int a, b, c, d = 0;
    
    scanf("%d %d", &a, &b);
    
    while(b != 0){
        
        c = b%10;
        b = b/10;
        
        if(a == c){
            d++;
        }
    }
    
    printf("%d", d);
    
    return 0;
}