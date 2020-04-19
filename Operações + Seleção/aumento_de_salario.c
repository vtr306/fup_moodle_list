#include <stdio.h>

int main(){
    
    float sal;
    
    scanf("%f", &sal);
    
    if(sal<=1000){
        printf("%.2f", sal + (sal*0.2));
    }
    else if(sal>1000&&sal<=1500){
        printf("%.2f", sal + (sal*0.15));
    }
    else if(sal>1500&&sal<=2000){
        printf("%.2f", sal + (sal*0.1));
    }
    else if(sal>2000){
        printf("%.2f", sal + (sal*0.05));
    }
    
    return 0;
}