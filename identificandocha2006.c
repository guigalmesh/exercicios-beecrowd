#include <stdio.h>

int main(){
    int t, acertos = 0, competidores[5];
    scanf("%d", &t);
    for(int i = 0; i < 5; i++){
       scanf("%d", &competidores[i]);
       if(competidores[i] == t)
            acertos++;
    }
    printf("%d\n", acertos);
    return 0;
}