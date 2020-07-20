#include <stdio.h>
int v1[100010], v2[100010], in[100010];
int main(){
    int n1, n2, verifica = 0, k = 0;
    scanf("%d", &n1);
    for(int i = 0; i < n1; i++){
        scanf("%d", &v1[i]);
    }
    scanf("%d", &n2);
    for(int i = 0; i < n2; i++){
        scanf("%d", &v2[i]);
    }
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(v1[i] == v2[j]){
                in[k] = v1[i];
                k++;
                break;
            }
        }
    }
    
    for(int i = 0; i < n1; i++){
        if(v1[i] == in[i]){
            verifica++;
        }
    }
    
    if(verifica == n1){
        printf("sim");
    }
    else printf("nao");
    return 0;
}