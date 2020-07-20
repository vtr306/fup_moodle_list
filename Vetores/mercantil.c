#include <stdio.h>

int main(){
    int n, pri = 0, seg = 0;
    scanf("%d", &n);
    double valor[n], chute[n];
    char palpite[n];
    for(int i = 0; i < n; i ++){
        scanf("%lf", &valor[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", &chute[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("\n%c", &palpite[i]);
    }
    for(int i = 0; i < n; i++){
        if(valor[i] == chute[i]){
            pri++;
        }
        else if(valor[i] > chute[i]){
            if(palpite[i] == 'M'){
                seg++;
            }
            else pri++;
        }
        else if(chute[i] > valor[i]){
            if(palpite[i] == 'm'){
                seg++;
            }
            else pri++;
        }
    }
    if(pri == seg){
        printf("empate");
    }
    else if(pri > seg){
        printf("primeiro");
    }
    else printf("segundo");
    return 0;
}