#include <stdio.h>

int main(){

    double soma = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            double x;
            scanf("%lf", &x);
            soma+= x;
        }
    }

    printf("%.1lf", soma);

    return 0;
}