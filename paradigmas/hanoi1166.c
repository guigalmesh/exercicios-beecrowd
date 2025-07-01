#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n, intervalo, bolas = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            if(i == 1)
                intervalo = i;
            else{
                intervalo = (i % 2 == 0) ? i : i + 1;
            }
            bolas += intervalo;
        }
        printf("%d\n", bolas);
    }
    return 0;
}