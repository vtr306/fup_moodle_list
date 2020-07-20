#include <stdio.h>
int numerofinal[10010];
int main(){
    int num, k = 0;
    scanf("%d", &num);
    
    while(num > 0){
        numerofinal[k] = num%10;
        num = num/10;
        k++;
    }
    
    for(int i = k - 1; i >= 0; i--){
        printf("%d ", numerofinal[i]);
    }
    return 0;
}